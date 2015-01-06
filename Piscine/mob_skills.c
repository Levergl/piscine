/*
** mob_skills.c for mob_skills in /home/leverg_l/battle_for_Midgard
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Fri Oct 31 16:15:39 2014 LEVERGEOIS Livien
** Last update Fri Oct 31 19:57:04 2014 LEVERGEOIS Livien
*/
#include "structures.h"

void	 bite(t_hero *player, t_monster *monster)
{
  player->pv -= 6;
  my_putstr(monster->name);
  my_putstr(" use bite !\n");
  my_putstr(player->name);
  my_putstr(" lose 6 HP\n");
}

void	earthquake(t_hero *player, t_monster *monster)
{
  player->pv -= 15;
  monster->pv -= 3;
  earthquake(player, monster);
  my_putstr(monster->name);
  my_putstr(" use earthquake !\n");
  my_putstr(player->name);
  my_putstr(" lose 15 HP\n");
  my_putstr(monster->name);
  my_putstr(" lose 3 HP\n");
}

int	doom(t_hero *player, t_hero *monster)
{
  player->pv -= 11;
  monster->pm -= 5;
  my_putstr(monster->name);
  my_putstr(" use doom !\n");
  my_putstr(player->name);
  my_putstr(" lose 11 HP\n");
  my_putstr(monster->name);
  my_putstr(" lose 5 MP\n");
  return (0);
}

int	libra(t_hero *player, t_hero *monster)
{
  if (player->pm >= 1)
    {
      my_putstr(monster->name);
      my_putchar('\n');
      my_putstr("|--PV : ");
      my_put_nbr(monster->pv);
      my_putchar('\n');
      my_putstr("|--PM : ");
      my_put_nbr(monster->pm);
      my_putchar('\n');
      player->pm -= 1;
      return (0);
    }
  else
    {
      return (1);
    }
}
