/*
** my_putstr.c for my_putstr in /home/leverg_l/semaine2/Jour02/leverg_l
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Tue Oct 21 19:59:10 2014 LEVERGEOIS Livien
** Last update Sat Oct 25 11:34:23 2014 LEVERGEOIS Livien
*/
void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}
