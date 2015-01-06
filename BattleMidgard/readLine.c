/*
** readLine.c for readLine in /home/leverg_l/battle_for_Midgard
** 
** Made by LEVERGEOIS Livien
** Login   <leverg_l@etna-alternance.net>
** 
** Started on  Thu Oct 30 22:23:21 2014 LEVERGEOIS Livien
** Last update Fri Oct 31 18:44:07 2014 LEVERGEOIS Livien
*/
#include <stdlib.h>

char		*readLine()
{
  ssize_t	ret;
  char		*buff;
  
  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
