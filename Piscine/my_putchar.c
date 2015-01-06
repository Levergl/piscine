/*
** my_putchar.c for my_putchar in /home/leverg_l/semaine2/Libmy/leverg_l/libmy01
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Sat Oct 25 15:47:57 2014 LEVERGEOIS Livien
** Last update Fri Oct 31 16:04:21 2014 LEVERGEOIS Livien
*/

#include <unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}
