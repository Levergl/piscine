/*
** my_strncat.c for my_strncat in /home/leverg_l/semaine2/Jour04/leverg_l/my_strncat
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Thu Oct 23 22:15:09 2014 LEVERGEOIS Livien
** Last update Tue Oct 28 18:39:09 2014 LEVERGEOIS Livien
*/
int     my_strlen(char *str);

char    *my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	len_str1;

  len_str1 = my_strlen(str1);
  for (i = 0; i < n && str2[i] != '\0'; i++)
    {
      str1[len_str1 + i] = str2[i];
    }
  str1[len_str1 + i] = '\0';
  return (str1);
}
