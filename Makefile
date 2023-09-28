CC			= gcc
FLAGS		= -Werror -Wall -Wextra
NAME		= libft.a
HEADER		= libft.h
SRC_FILES	= ft_putchar.c \
				ft_putstr.c \
				ft_putendl.c \
				ft_putnbr.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c
OBJ_FILES	= $(SRC_FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

.c.o :
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_FILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all
