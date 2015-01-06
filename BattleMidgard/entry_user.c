#include "libmy.a"
#include <unistd.h>
#include <stdlib.h>

char        *readLine()
{
  ssize_t   ret;
  char      *buff;

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

void invalid_entry()
{
  my_putstr(" \e[31mUnknown command\e[0m");
  my_putchar('\n');
}

int    read_entry(char *entry)
{
  if (rentry == NULL)
    {
      exit(0);
    }

   my_strupcase(entry);

   if (my_strcmp(entry, "SLASH") == 0)
    return (1);

   if (my_strcmp(entry, "ATTACK") == 0)
    return (2);

   if (my_strcmp(entry, "THUNDER") == 0)
    return (3);

   if (my_strcmp(entry, "FIRE") == 0)
    return (4);

   if (my_strcmp(entry, "STAT") == 0)
    return (5);

   if (my_strcmp(entry, "LIBRA") == 0)
    return (6);

  invalid_entry();
  return (0);
}