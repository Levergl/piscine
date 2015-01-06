/*
** init_structs.c for init_structs in /home/leverg_l/battle_for_Midgard
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Fri Oct 31 21:50:34 2014 LEVERGEOIS Livien
** Last update Fri Oct 31 21:54:50 2014 LEVERGEOIS Livien
*/
#include "structures.h"

void	init_hero(t_hero *player)
{
  player->name = Robert;
  player->pv = 100;
  player->pm = 30;
}

void	init_monster(t_monster *monster)
{
  monster->name = Jena;
  player->pv = 75;
  player->pm = 30;
}
