/*
** my_strcmp.c for my_strcmp in /home/leverg_l/semaine2/Jour04/leverg_l/my_strcmp
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Thu Oct 23 16:55:44 2014 LEVERGEOIS Livien
** Last update Fri Oct 31 17:29:14 2014 LEVERGEOIS Livien
*/
int	my_strcmp(char *s1, char *s2)
{
  int	i;
  
  i = 0;
  while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
    {
      i = i + 1;
    }
  if (s1[i] > s2[i])
    {
      return (1);
    }
  else if (s1[i] < s2[i])
    {
      return (-1);
    }
  else
    {
      return (0);
    }
}
