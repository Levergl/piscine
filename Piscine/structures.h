/*
** structures.h for structures in /home/leverg_l/battle_for_Midgard
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Thu Oct 30 22:09:33 2014 LEVERGEOIS Livien
** Last update Fri Oct 31 14:28:08 2014 LEVERGEOIS Livien
*/

#ifndef STRUCTURES_H_
#define STRUCTURES_H_

typedef struct s_hero t_hero;
struct	s_hero
{
  char  *name;
  int	pv;
  int	pm;
};

typedef	struct s_monster t_monster;
struct	s_monster
{
  char	*name;
  int	pv;
  int	pm;
};

void	attack(t_monster *monster);

int	slash(t_hero *player, t_monster *monster);

int	fire(t_hero *player, t_monster *monster);

int	thunder(t_hero *player, t_monster *monster);

void	bite(t_hero *player, t_monster *monster);

void    earthquake(t_hero *player, t_monster *monster);

int     doom(t_hero *player, t_hero *monster);

int     libra(t_hero *player, t_hero *monster);

void    stat(t_hero *player);

int     rand_mob(int argc, char *argv[]);

int     prompt(int argc, char *argv[]);

void    init_hero(t_hero *player);

void    init_monster(t_monster *monster);

void    my_putchar(char c);

void    my_put_nbr(int n);

int	my_strcmp(char *s1, char *s2);

void	my_putstr(char *str);

#endif
