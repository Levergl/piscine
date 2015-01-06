/*
** my_strcpy.c for my_strcpy in /home/leverg_l/semaine2/Jour04/leverg_l
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Thu Oct 23 10:46:09 2014 LEVERGEOIS Livien
** Last update Tue Oct 28 18:29:48 2014 LEVERGEOIS Livien
*/
char	*my_strcpy(char *dest, char *src)
{
  int	i;
 
  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      ++i;
    }
  dest[i] = '\0';
  return (dest);
}
