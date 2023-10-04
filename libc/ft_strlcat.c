/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzog <luzog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:31:53 by luzog             #+#    #+#             */
/*   Updated: 2023/09/28 15:09:46 by luzog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char const *src, unsigned int size)
{
	unsigned int	full_size;
	unsigned int	counter;
	unsigned int	i;

	i = 0;
	while (dest[i] && i < size)
		i++;
	full_size = ft_strlen(src) + i;
	if (size > 0)
	{
		counter = ft_strlen(dest);
		i = 0;
		while (counter < size - 1 && src[i] != '\0')
		{
			dest[counter] = src[i];
			counter++;
			i++;
		}
		dest[counter] = '\0';
	}
	return (full_size);
}
