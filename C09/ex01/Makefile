HEADERS = -I ./includes

OBJ = $(SRC:.c=.o)

CC = gcc

Flags =  -Wall -Wextra -Werror

SRC = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

libft.a : ${OBJ}
	ar rcs libft.a ${OBJ}

all : libft.a

.c.o :
		${CC} ${Flags} ${HEADERS} -c $< -o ${<:.c=.o}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f libft.a

re : fclean all
