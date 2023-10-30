/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabik <ysabik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 02:18:56 by luzog             #+#    #+#             */
/*   Updated: 2023/10/30 17:46:15 by ysabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}	t_list;

/* ******************************** */
/* === ->>  Libc functions  <<- === */
/* ******************************** */

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(char const *str);
void		*ft_memset(void *dest, int c, size_t len);
void		ft_bzero(void *dest, size_t len);
void		*ft_memcpy(void *dest, void const *src, size_t len);
void		*ft_memmove(void *dest, void const *src, size_t len);
size_t		ft_strlcpy(char *dest, char const *src, size_t size);
size_t		ft_strlcat(char *dest, char const *src, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(char const *str, int c);
char		*ft_strrchr(char const *str, int c);
int			ft_strncmp(char const *s1, char const *s2, size_t n);
void		*ft_memchr(void const *src, int c, size_t len);
int			ft_memcmp(void const *src1, void const *src2, size_t len);
char		*ft_strnstr(char const *str, char const *to_find, size_t len);
int			ft_atoi(char const *str);
// calloc
char		*ft_strdup(char const *src);

/* ************************************** */
/* === ->>  Additional functions  <<- === */
/* ************************************** */

char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *str);
char		**ft_strsplit(char const *str, char c);
char		*ft_itoa(int integer);
char		*ft_strmapi(char *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *str, int fd);
void		ft_putendl_fd(char const *str, int fd);
void		ft_putnbr_fd(int n, int fd);

/* **************************** */
/* === ->>  Bonus Part  <<- === */
/* **************************** */

// Lists
t_list		*ft_lstnew(void const *content, size_t content_size);
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstadd(t_list **alst, t_list *nxt);
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

// Libc
void		*ft_memccpy(void *dest, void const *src, int c, size_t len);
char		*ft_strcpy(char *dest, char const *src);
char		*ft_strncpy(char *dest, char const *src, size_t n);
char		*ft_strcat(char *dest, char const *src);
char		*ft_strncat(char *dest, char const *src, size_t n);
char		*ft_strstr(char *str, char const *to_find);
int			ft_strcmp(char const *s1, char const *s2);

// Miscellanous
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
char		*ft_strmap(char *s, char (*f)(char));
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2);
void		ft_putchar(char c);
void		ft_putstr(char const *str);
void		ft_putendl(char const *s);
void		ft_putnbr(int n);

#endif
