/*
** my_strncmp.c for my_strncmp in /home/leverg_l/semaine2/Jour04/leverg_l/my_strncmp
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Thu Oct 23 17:41:06 2014 LEVERGEOIS Livien
** Last update Tue Oct 28 18:35:23 2014 LEVERGEOIS Livien
*/
int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  n = n - 1;
  while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0') && (i != n))
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
