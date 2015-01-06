/*
** my_strncpy.c for my_strncpy in /home/leverg_l/semaine2/Jour04/leverg_l/my_strncpy
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Thu Oct 23 13:24:49 2014 LEVERGEOIS Livien
** Last update Tue Oct 28 18:33:28 2014 LEVERGEOIS Livien
*/
int	my_tablen(char tab[]);

char	*my_strncpy(char *dest, char *src, int n)
{	
  int i;

  i = 0;
  if (n < my_tablen(src))
    {
      while (i < n)
	{
	  dest[i] = src[i];
	  ++i;
	}
    }
      else if (my_tablen(src) < n)
	{
	  while (i < n && src[i] != '\n')
	    {
	      dest[i] = src[i];
	      ++i;
	    }
	}
  return (dest);
}

int	my_tablen(char tab[])
{
  int count;
  int i;

  i = 0;
  count = 0;

  while (tab[i] != '\0')
    {
      i = i + 1;
      count = count + 1;
    }
  return (count);
}
