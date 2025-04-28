OPTIONS = -c -I $(IDIR)

CC = gcc
FLAGS = -Wall -Wextra -Werror

NAME = libft.a

IDIR = includes/

PATH_SRC = srcs/

SRC = $(PATH_SRC)ft_putchar.c $(PATH_SRC)ft_putstr.c $(PATH_SRC)ft_strcmp.c \
		$(PATH_SRC)ft_strlen.c $(PATH_SRC)ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:
		$(CC) $(FLAGS) $(OPTIONS) $(SRC)
		ar rsc $(NAME) $(OBJ)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f  $(NAME)

re: fclean all