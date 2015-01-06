/*
** my_strlen.c for my_strlen in /home/leverg_l/semaine2/Jour03/leverg_l
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Wed Oct 22 11:08:11 2014 LEVERGEOIS Livien
** Last update Tue Oct 28 18:37:44 2014 LEVERGEOIS Livien
*/
int	my_strlen(char *str)
{
  int	count;

  count = 0;
  while (*str != '\0')
    {
      count = count + 1;
      str++;
    }
  return (count);
}
