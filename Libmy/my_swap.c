/*
** my_swap.c for my_swap in /home/leverg_l/semaine2/Jour03/leverg_l/my_swap
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Wed Oct 22 10:06:43 2014 LEVERGEOIS Livien
** Last update Sat Oct 25 15:59:08 2014 LEVERGEOIS Livien
*/
void	my_swap(int *a, int*b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
