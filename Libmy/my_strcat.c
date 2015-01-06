/*
** my_strcat.c for my_strcat in /home/leverg_l/semaine2/Jour04/leverg_l/my_strcat
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Thu Oct 23 20:59:52 2014 LEVERGEOIS Livien
** Last update Tue Oct 28 18:38:11 2014 LEVERGEOIS Livien
*/
int	my_strlen(char *str);

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	len_str1;

  len_str1 = my_strlen(str1);
  for (i = 0; str2[i] != '\0'; i++)
    {
      str1[len_str1 + i] = str2[i];
    }
  str1[len_str1 + i] = '\0';
  return (str1);
}
