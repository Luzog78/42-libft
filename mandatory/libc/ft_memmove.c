/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabik <ysabik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:29:52 by luzog             #+#    #+#             */
/*   Updated: 2023/10/31 13:21:20 by ysabik           ###   ########.fr       */
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
		{
			*mem = *(unsigned char *) src;
			mem++;
			src++;
		}
	}
	else
	{
		mem += len;
		src += len;
		while (len--)
		{
			mem--;
			src--;
			*mem = *(unsigned char *) src;
		}
	}
	return (dest);
}
