/*
** my_getnbr.c for my_getnbr in /home/leverg_l/semaine2/Jour03/leverg_l/my_getnbr
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Wed Oct 22 11:32:22 2014 LEVERGEOIS Livien
** Last update Tue Oct 28 18:30:43 2014 LEVERGEOIS Livien
*/
void	my_putchar(char c);

int	is_numeric(char c)
{
  if (c >= '0' && c <= '9')
    {
      return (1);
    }
  else
    {
      return (0);
    }
}

int	my_nb_neg(char *str)
{
  int	count;

  count = 0;
  while (*str != '\0')
    {
      if (*str == '-')
	{
	  count++;
	  str++;
	}
      else
	{
	  str++;
	}
    }
  if (count % 2 == 0)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}

void    my_put_nbr(int n);

int	my_getnbr(char *str)
{
    int	i;
    int	n;

    n = 0;
    i = 0;
    while (is_numeric(str[i]) == 0)
      if (str[i] == '+' || str[i] == '-')
	{
	  i++;
	}
      else
	{
	  return (0);
	}
    while (is_numeric(str[i]) == 1)
      {
	n = ((n * 10) + (str[i] - 48));
	i++;
      }
    if (my_nb_neg(str) == 0)
      n = -n;
    return (n);
  }
