/*
** my_aff_tab.c for my_aff_tab in /home/leverg_l/semaine2/Jour02/leverg_l
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Tue Oct 21 10:46:41 2014 LEVERGEOIS Livien
** Last update Sat Oct 25 17:03:35 2014 LEVERGEOIS Livien
*/
void	my_putchar(char c);

void	my_put_nbr(int n);

void	my_aff_tab(int tab[], int len)
{
  int	i;
  for (i = 0; i < len; i++)
    {
      my_put_nbr(tab[i]);
      my_putchar('\n');
    }
}
