CC= gcc
NAME= Ragnarok.a
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
RM= rm -f
FLAGS = -W -Wall -Werror

$(NAME):	$(OBJ)
	@ar r $(NAME) $(OBJ)
	@ranlib $(NAME)

all:	$(OBJ)
	$(CC) $(FLAGS) -c $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all