/*
** my_putnbr_base.c for my_putnbr_base in /home/leverg_l/Libmy/leverg_l/libmy_02
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Mon Oct 27 13:34:39 2014 LEVERGEOIS Livien
** Last update Tue Oct 28 18:34:55 2014 LEVERGEOIS Livien
*/
int	my_strlen(char *str);

void    my_putchar(char c);

int	my_putnbr_base(int nb, char *base)
{
  int	a;
  int	len_str;

  if (nb == -2147483648)
    {
      return (nb);
    }
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  len_str = my_strlen(base);
  a = nb % len_str;
  nb = nb / len_str;
  if (nb > 0)
    {
      my_putnbr_base(nb, base);
    }
  my_putchar(base[a]);
  return (nb);
}
