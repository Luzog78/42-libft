/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzog <luzog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 02:18:56 by luzog             #+#    #+#             */
/*   Updated: 2023/09/30 19:06:09 by luzog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int				ft_atoi(char const *str);
int				ft_isalnum(char const *str);
int				ft_isalpha(char const *str);
int				ft_isascii(char const *str);
int				ft_isdigit(char const *str);
int				ft_isprint(char const *str);
char			*ft_strcat(char *dest, char const *src);
int				ft_strcmp(char const *s1, char const *s2);
char			*ft_strcpy(char *dest, char const *src);
char			*ft_strdup(char const *src);
unsigned int	ft_strlcat(char *dest, char const *src, unsigned int size);
int				ft_strlen(char const *str);
char			*ft_strncat(char *dest, char const *src, unsigned int n);
int				ft_strncmp(char const *s1, char const *s2, unsigned int n);
char			*ft_strncpy(char *dest, char const *src, unsigned int n);
char			*ft_strstr(char *str, char const *to_find);
char			*ft_tolower(char *str);
char			*ft_toupper(char *str);

void			ft_putchar_fd(char c, int fd);
void			ft_putchar(char c);
void			ft_putendl_fd(char const *str, int fd);
void			ft_putendl(char const *s);
void			ft_putnbr_fd(int n, int fd);
void			ft_putnbr(int n);
void			ft_putstr_fd(char const *str, int fd);
void			ft_putstr(char const *str);
int				ft_strequ(char const *s1, char const *s2);
char			*ft_strjoin(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2);
char			**ft_strsplit(char const *str, char c);
char			*ft_strtrim(char const *str);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_itoa(int integer);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char *s, char (*f)(char));
char			*ft_strmapi(char *s, char (*f)(unsigned int, char));
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);

#endif
