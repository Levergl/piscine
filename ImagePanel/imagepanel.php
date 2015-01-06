#!/usr/bin/env php
<?php
// imagepanel.php for  in /home/khim_w/PHP/image_panel/khim_w
// 
// Made by Khim William
// Login   <khim_w@etna-alternance.net>
// 
// Started on  Thu Nov  6 19:16:12 2014 Khim William
// Last update Sat Nov  8 17:58:58 2014 Khim William
//

include "img_function.php";

function check_url($argc, $argv, $i)
{
  if ($i == $argc)
    return "Usage : ./imagepanel.php [options] lien1 [lien2 [...]] base\n";
      else
        {
          for ($i; $i < $argc - 1; $i++)
            {
	      if (filter_var($argv[$i], FILTER_VALIDATE_URL) == FALSE)
		return "imagepanel.php: " . $argv[$i] . " : Invalid URL\n";
            }
        }
  if (!preg_match("/^[\w]*$/", $argv[$i]))
    return "Usage : ./imagepanel.php [options] lien1 [lien2 [...]] base\n";
  return "";
}

function check_param($argc, $argv)
{
  if ($argc > 2)
    {
      $i = 0;
      if (preg_match("/-[gjlnNps]*/", $argv[1]))
	{
	  if (preg_match("/l/", $argv[1]))
	    {
	      if (isset($argv[2]))
		{
		  if (preg_match("/^\d*$/", $argv[2]))
		    $i = 3;
		  else
		    return "Usage : ./imagepanel.php [options] lien1 [lien2 [...]] base\n";
		}
	      else
		return "Usage : ./imagepanel.php [options] lien1 [lien2 [...]] base\n";
	    }
	  else
	    $i = 2;
	}
      else
	$i = 1;
      if (check_url($argc, $argv, $i) != "")
	echo check_url($argc, $argv, $i);
    }
  else
    return "Usage : ./imagepanel.php [options] lien1 [lien2 [...]] base\n";
  return "";
}

function init_param($params)
{
  $params["extension"] = ".jpg";
  $params["nb_meta"] = 20;
  $params["name"] = 0;
  $params["sort"] = false;
  return $params;
}

function get_opt($argc, $argv)
{
  $available = array("g", "j", "l", "n", "N", "p", "s");
  $choosed = array();
  $options  = preg_grep ("/^-[\w]*/", $argv);
  $url = array_values(preg_grep("/^http:\/\/.*/", $argv));
  if (!empty($options))
    {
      for ($i = 0; $i < count($available); $i++)
	{
	  if (preg_match("/" . $available[$i] . "/", $options[1]))
	    $choosed[] = $available[$i];
	}
    }
  $params = array();
  $params = init_param($params);
  $params["base"] = $argv[$argc - 1];
  $params["url"] = $url;
  for ($i = 0; $i < count($choosed); $i++)
    {
      if ($choosed[$i] == "g")
	$params["extension"] = ".gif";
      if ($choosed[$i] == "p")
	$params["extension"] = ".png";
      if ($choosed[$i] == "l")
	$params["nb_meta"] = (int)$argv[2];
      if ($choosed[$i] == "s")
	$params["sort"] = true;
      if ($choosed[$i] == "n")
	$params["name"] = -1;
      if ($choosed[$i] == "N")
	$params["name"] = 1;
    }
  return $params;
}

function panel($argc, $argv)
{
  if (check_param($argc, $argv) != "")
    echo check_param($argc, $argv);
  else
    {
      $opt = get_opt($argc, $argv);
      $url = $opt["url"];
      foreach ($opt["url"] as $url)
	{
	  $str = file_get_contents($url);
	  preg_match_all("/<img.*?src=\"([^\"]*)\"/", $str, $matches);
	  if ($opt["sort"] == true)
	    sort($matches[1]);
	  $nb_img = count($matches[1]);
	  $nb_panel = $opt["nb_meta"];
	  $nb_panel = ($nb_panel > $nb_img) ? $nb_img : $nb_panel;
	  echo $nb_img . " images trouvÃ©es.\n";
	  $j = $nb_img / $nb_panel;
	  for ($k = 0; $k < $j; $k++)
	    {
	      $panel = create_panel();
	      $coord = array(10, 10);
	      $time = ($k + 1) * $nb_panel;
	      if ($time > $nb_img)
		$time = $nb_img;
	      $max_height = 0;
	      for ($i = ($k * $nb_panel); $i < $time; $i++)
		{
		  $width = imagesx($panel) / 5;
		  $height = imagesy($panel) / 5;
		  $img = open_img($url, $matches[1][$i]);
		  if ($img != null)
		    {
		      $ratio_orig = imagesx($img)/imagesy($img);
		      if ($width/$height > $ratio_orig) {
			$width = $height*$ratio_orig;
		      } else {
			$height = $width/$ratio_orig;
		      }
		      if ($height > $max_height)
			$max_height = $height;
		      $resize = imagecreatetruecolor($width, $height);
		      imagecopyresampled($resize, $img, 0, 0, 0, 0, $width, $height, imagesx($img), imagesy($img));
		      if ((imagesx($resize) + $coord[0]) > imagesx($panel) - 10)
			{
			  $coord[0] = 10;
			  $coord[1] += $max_height + 10;
			  $max_height = 0;
			}
		      copy_img($panel, $resize, $coord, $k, $opt);
		      $coord[0] += imagesx($resize) + 10;
		      imagedestroy($resize);
		      imagedestroy($img);
		    }
		  else
		    echo "imagepanel.php : Can't open image\n";
		}
	      imagedestroy($panel);
	    }
	}
    }
}

panel($argc, $argv);

?>