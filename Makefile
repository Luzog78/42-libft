CC			= gcc
FLAGS		= -Werror -Wall -Wextra
NAME		= libft.a
HEADER		= libft.h
SRC_FILES	= \
				libc/ft_memset.c \
				libc/ft_bzero.c \
				libc/ft_memcpy.c \
				libc/ft_memccpy.c \
				libc/ft_memmove.c \
				libc/ft_memchr.c \
				libc/ft_memcmp.c \
				libc/ft_strlen.c \
				libc/ft_strdup.c \
				libc/ft_strcpy.c \
				libc/ft_strncpy.c \
				libc/ft_strcat.c \
				libc/ft_strncat.c \
				libc/ft_strlcat.c \
				libc/ft_strchr.c \
				libc/ft_strrchr.c \
				libc/ft_strstr.c \
				libc/ft_strnstr.c \
				libc/ft_strcmp.c \
				libc/ft_strncmp.c \
				libc/ft_atoi.c \
				libc/ft_isalpha.c \
				libc/ft_isdigit.c \
				libc/ft_isalnum.c \
				libc/ft_isascii.c \
				libc/ft_isprint.c \
				libc/ft_toupper.c \
				libc/ft_tolower.c \
				\
				additional/ft_memalloc.c \
				additional/ft_memdel.c \
				additional/ft_strnew.c \
				additional/ft_strdel.c \
				additional/ft_strclr.c \
				additional/ft_striter.c \
				additional/ft_striteri.c \
				additional/ft_strmap.c \
				additional/ft_strmapi.c \
				additional/ft_strequ.c \
				additional/ft_strnequ.c \
				additional/ft_strsub.c \
				additional/ft_strjoin.c \
				additional/ft_strtrim.c \
				additional/ft_strsplit.c \
				additional/ft_itoa.c \
				additional/ft_putchar.c \
				additional/ft_putstr.c \
				additional/ft_putendl.c \
				additional/ft_putnbr.c \
				additional/ft_putchar_fd.c \
				additional/ft_putstr_fd.c \
				additional/ft_putendl_fd.c \
				additional/ft_putnbr_fd.c \
				\
				list/ft_lstnew.c \
				list/ft_lstdelone.c \
				list/ft_lstdel.c \
				list/ft_lstadd.c \
				list/ft_lstiter.c \
				list/ft_lstmap.c
OBJ_FILES	= $(SRC_FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

.c.o :
	$(CC) $(FLAGS) -c $< -o $@ -I.

clean :
	rm -rf $(OBJ_FILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all
