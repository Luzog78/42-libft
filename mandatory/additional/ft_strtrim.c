/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabik <ysabik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:43:44 by luzog             #+#    #+#             */
/*   Updated: 2023/10/30 18:43:27 by ysabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c);
static char	*ft_strncopy(char *dest, char const *src, size_t n);

char	*ft_strtrim(char const *s)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (is_space(*s))
		s++;
	while (s[i])
	{
		if (!is_space(s[i]))
			j = i;
		i++;
	}
	new = (char *) malloc(sizeof(char) * (j + 2));
	if (new == NULL)
		return (NULL);
	ft_strncopy(new, s, j + 1);
	new[j + 1] = '\0';
	return (new);
}

static int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static char	*ft_strncopy(char *dest, char const *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
