<?php 

function open_img($url, $filename)
{
  preg_match("/[\S]*[.][a-z]{2,4}[\w\/]*/", $url, $res);
  $path = "";
  if (preg_match("/^https?:\/\/.*/", $filename) == 1)
    $path = $filename;
  else
    $path = $res[0] . "/" . $filename;
  preg_match("/\.[A-Za-z0-9]+$/", $filename, $extension);
  if (!empty($extension))
    {
      if (strtolower($extension[0]) == ".jpeg" || strtolower($extension[0]) == ".jpg")
        $src = imagecreatefromjpeg($path);
      else if (strtolower($extension[0]) == ".png")
        $src = imagecreatefrompng($path);
      else if (strtolower($extension[0]) == ".gif")
        $src = imagecreatefromgif($path);
    }
  else
    return null;
  return $src;
}

function copy_img($panel, $img, $coord, $number, $opt)
{
  imagecopy($panel, $img, $coord[0], $coord[1], 0, 0, imagesx($img), imagesy($img));
  if ($opt["extension"] == ".jpg")
    if ($number == 0)
      imagejpeg($panel, $opt["base"] . ".jpg");
    else
      imagejpeg($panel, $opt["base"] . ($number + 1) . ".jpg");
  elseif ($opt["extension"] == ".png")
    if ($number == 0)
      imagepng($panel, $opt["base"] . ".png");
    else
      imagepng($panel, $opt["base"] . ($number + 1) . ".png");
  elseif ($opt["extension"] == ".gif")
    if ($number == 0)
      imagegif($panel, $opt["base"] . ".gif");
    else
      imagegif($panel, $opt["base"] . ($number + 1) . ".gif");
}

function create_panel()
{
  $panel = imagecreatetruecolor(1280, 800);
  $white = imagecolorallocate($panel, 255, 255, 255);
  imagefilledrectangle($panel, 0, 0, 1280, 800, $white);
  return $panel;
}