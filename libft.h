/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzog <luzog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 02:18:56 by luzog             #+#    #+#             */
/*   Updated: 2023/10/04 02:02:04 by luzog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void			*ft_memset(void *dest, int c, size_t len);
void			ft_bzero(void *dest, size_t len);
void			*ft_memcpy(void *dest, void const *src, size_t len);
void			*ft_memccpy(void *dest, void const *src, int c, size_t len);
void			*ft_memmove(void *dest, void const *src, size_t len);
void			*ft_memchr(void const *src, int c, size_t len);
int				ft_memcmp(void const *src1, void const *src2, size_t len);
char			*ft_strchr(char const *str, int c);
char			*ft_strrchr(char const *str, int c);
char			*ft_strnstr(char const *str, char const *to_find, size_t len);
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

void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
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
