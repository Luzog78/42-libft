/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzog <luzog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:54:38 by luzog             #+#    #+#             */
/*   Updated: 2023/10/04 01:55:48 by luzog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *str, char const *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return ((char *) str);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && to_find[j]
			&& str[i + j] == to_find[j] && i + j < len)
			j++;
		if (!to_find[j])
			return ((char *) str + i);
		i++;
	}
	return (NULL);
}
