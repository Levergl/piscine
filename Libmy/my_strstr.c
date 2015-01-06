/*
** my_strstr.c for my_strstr in /home/leverg_l/semaine2/Libmy/leverg_l/libmy01
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Sat Oct 25 16:42:28 2014 LEVERGEOIS Livien
** Last update Mon Oct 27 15:12:42 2014 LEVERGEOIS Livien
*/
char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	cpt;

  i = 0;
  cpt = 0;
  while (str[i])
    {
      if (str[i] == to_find[cpt])
	{
	  cpt = cpt + 1;
	}
      else
	{
	  cpt = 0;
	}
      if (!to_find[cpt])
	{
	  i = i - (cpt - 1);
	  return (str + i);
	}
      i = i + 1;
    }
  return ("null");
}
