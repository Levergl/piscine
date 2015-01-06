/*
** skills.c for skills in /home/leverg_l/battle_for_Midgard
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Fri Oct 31 13:29:09 2014 LEVERGEOIS Livien
** Last update Fri Oct 31 16:10:35 2014 LEVERGEOIS Livien
*/
#include "structures.h"

void		attack(t_monster *monster)
{ 
  monster->pv -= 7;
  my_putstr(player->name);
  my_putstr(" attack !\n");
  my_putstr(monster->name);
  my_putstr(" lose 7 HP\n");
}

int		slash(t_hero *player, t_monster *monster)
{
  monster->pv -= 10;
  player->pv -= 2;
  my_putstr(player->name);
  my_putstr(" use slash !\n");
  my_putstr(monster->name);
  my_putstr(" lose 10 HP\n");
  my_putstr(player->name);
  my_putstr(" lose 2 HP\n");
  return (0);
}

int		fire(t_hero *player, t_monster *monster)
{
  if (player->pm >= 3)
    {
      monster->pv -= 10;
      player->pm -=3;
      my_putstr(player->name);
      my_putstr(" use fire !\n");
      my_putstr(monster->name);
      my_putstr(" lose 10 HP\n");
      my_putstr(player->name);
      my_putstr(" lose 3 MP\n");
      return (0);
    }
  else
    {
      my_putstr(" You have not enough MP !\n");
      return (1);
    }
}

int		thunder(t_hero *player, t_monster *monster)
{
  if (player->pm >= 5)
    {
      monster->pv -= 15;
      player->pm -= 5;
      my_putstr(player->name);
      my_putstr(" use thunder !\n");
      my_putstr(monster->name);
      my_putstr(" lose 15 HP\n");
      my_putstr(player->name);
      my_putstr(" lose 5 MP\n");
      return (0);
    }
  else
    {
     my_putstr(" You have not enough MP !\n");
      return (1);
    }
}

void	stat(t_hero *player)
{
  my_putstr(player->name);
  my_putchar('\n');
  my_putstr("|--PV : ");
  my_put_nbr(player->pv);
  my_putchar('\n');
  my_putstr("|--PM : ");
  my_put_nbr(player->pm);
  my_putchar('\n');
}
