/*
** rand_mob.c for rand_mob in /home/leverg_l/battle_for_Midgard
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Fri Oct 31 18:16:30 2014 LEVERGEOIS Livien
** Last update Fri Oct 31 19:33:39 2014 LEVERGEOIS Livien
*/
#include <time.h>

int	rand(void);

void	srand(unsigned int seed);

int	rand_mob(int argc, char *argv[])
{
  int	i;
  int	rdm_nb;
  
  i=0;
  srand(time(NULL));
  if (monster->pm >= 5)
    rdm_nb = (rand() % 3) + 1;
  else
    rdm_nb = (rand() % 2) + 1;
  return (rdm_nb);
}
