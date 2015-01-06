/*
** my_put_nbr.c for my_put_nbr in /home/leverg_l/semaine2/leverg_l/my_put_nbr
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Mon Oct 20 22:40:20 2014 LEVERGEOIS Livien
** Last update Tue Oct 28 18:34:23 2014 LEVERGEOIS Livien
*/
void	my_putchar(char c);

void	my_putstr_min_int()
{
  char *str;

  str = "-2147483648";
  while (*str != '\0')
    {
      my_putchar(*str);
      str++;
    }
}

void	my_put_nbr(int n)
{
  int	diviser;
  int	res;

  diviser = 1;
  if (n == -2147483648)
    {
      my_putstr_min_int();
    }
  if (n < 0 && n != -2147483648)
    {
      n = n * -1;
      my_putchar('-');
    }
  while (n / diviser >= 10)
    {
      diviser = diviser * 10;
    }
  while (diviser != 0 && n != -2147483648)
    {
      res = (n / diviser) % 10;
      diviser = diviser / 10;
      my_putchar(res + '0');
    }
}
