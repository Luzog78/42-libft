/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabik <ysabik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:34:10 by ysabik            #+#    #+#             */
/*   Updated: 2023/10/30 18:35:34 by ysabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H
# include "libft.h"

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}	t_list;

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