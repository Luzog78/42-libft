CC					= gcc
FLAGS				= -Werror -Wall -Wextra
NAME				= libft.a
HEADER				= libft.h
MANDATORY_SRC_FILES	= \
	mandatory/libc/ft_isalpha.c \
	mandatory/libc/ft_isdigit.c \
	mandatory/libc/ft_isalnum.c \
	mandatory/libc/ft_isascii.c \
	mandatory/libc/ft_isprint.c \
	mandatory/libc/ft_strlen.c \
	mandatory/libc/ft_memset.c \
	mandatory/libc/ft_bzero.c \
	mandatory/libc/ft_memcpy.c \
	mandatory/libc/ft_memmove.c \
	mandatory/libc/ft_strlcpy.c \
	mandatory/libc/ft_strlcat.c \
	mandatory/libc/ft_toupper.c \
	mandatory/libc/ft_tolower.c \
	mandatory/libc/ft_strchr.c \
	mandatory/libc/ft_strrchr.c \
	mandatory/libc/ft_strncmp.c \
	mandatory/libc/ft_memchr.c \
	mandatory/libc/ft_memcmp.c \
	mandatory/libc/ft_strnstr.c \
	mandatory/libc/ft_atoi.c \
	mandatory/libc/ft_calloc.c \
	mandatory/libc/ft_strdup.c \
	mandatory/additional/ft_substr.c \
	mandatory/additional/ft_strjoin.c \
	mandatory/additional/ft_strtrim.c \
	mandatory/additional/ft_split.c \
	mandatory/additional/ft_itoa.c \
	mandatory/additional/ft_strmapi.c \
	mandatory/additional/ft_striteri.c \
	mandatory/additional/ft_putchar_fd.c \
	mandatory/additional/ft_putstr_fd.c \
	mandatory/additional/ft_putendl_fd.c \
	mandatory/additional/ft_putnbr_fd.c
BONUS_SRC_FILES		= \
	bonus/list/ft_lstnew.c \
	bonus/list/ft_lstdelone.c \
	bonus/list/ft_lstdel.c \
	bonus/list/ft_lstadd.c \
	bonus/list/ft_lstiter.c \
	bonus/list/ft_lstmap.c \
	bonus/libc/ft_memccpy.c \
	bonus/libc/ft_strcpy.c \
	bonus/libc/ft_strncpy.c \
	bonus/libc/ft_strcat.c \
	bonus/libc/ft_strncat.c \
	bonus/libc/ft_strstr.c \
	bonus/libc/ft_strcmp.c \
	bonus/misc/ft_memalloc.c \
	bonus/misc/ft_memdel.c \
	bonus/misc/ft_strnew.c \
	bonus/misc/ft_strdel.c \
	bonus/misc/ft_strclr.c \
	bonus/misc/ft_striter.c \
	bonus/misc/ft_strmap.c \
	bonus/misc/ft_strequ.c \
	bonus/misc/ft_strnequ.c \
	bonus/misc/ft_putchar.c \
	bonus/misc/ft_putstr.c \
	bonus/misc/ft_putendl.c \
	bonus/misc/ft_putnbr.c
MANDATORY_OBJ_FILES	= $(MANDATORY_SRC_FILES:.c=.o)
BONUS_OBJ_FILES		= $(BONUS_SRC_FILES:.c=.o)

all : $(NAME)

bonus : $(BONUS_OBJ_FILES) $(MANDATORY_OBJ_FILES)
	ar rcs $(NAME) $(BONUS_OBJ_FILES) $(MANDATORY_OBJ_FILES)

$(NAME) : $(MANDATORY_OBJ_FILES)
	ar rcs $(NAME) $(MANDATORY_OBJ_FILES)

.c.o :
	$(CC) $(FLAGS) -c $< -o $@ -I.

clean :
	rm -rf $(MANDATORY_OBJ_FILES) $(BONUS_OBJ_FILES)

fclean : clean
	rm -rf $(NAME)

re : fclean all
