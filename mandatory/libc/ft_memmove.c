/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzog <luzog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:29:52 by luzog             #+#    #+#             */
/*   Updated: 2023/10/04 01:36:37 by luzog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t len)
{
	unsigned char	*mem;

	mem = (unsigned char *) dest;
	if (dest <= src)
	{
		while (len--)
			*mem++ = *(unsigned char *) src++;
	}
	else
	{
		mem += len;
		src += len;
		while (len--)
			*--mem = *(unsigned char *)--src;
	}
	return (dest);
}
