/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabik <ysabik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:43:44 by luzog             #+#    #+#             */
/*   Updated: 2023/10/30 17:56:38 by ysabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c);

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
	ft_strncpy(new, s, j + 1);
	new[j + 1] = '\0';
	return (new);
}

static int	is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}
