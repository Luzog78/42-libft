CC			= gcc
FLAGS		= -Werror -Wall -Wextra
NAME		= libft.a
SRC_FILES	= ft_putchar.c
OBJ_FILES	= $(SRC_FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)

.c.o : $(SRC_FILES)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -rf $(OBJ_FILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all
