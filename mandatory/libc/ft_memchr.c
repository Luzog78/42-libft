/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabik <ysabik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 01:36:49 by luzog             #+#    #+#             */
/*   Updated: 2023/10/30 18:00:25 by ysabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *src, int c, size_t len)
{
	unsigned char	*src_cpy;

	src_cpy = (unsigned char *) src;
	while (len--)
	{
		if (*src_cpy == (unsigned char) c)
			return ((void *) src_cpy);
		src_cpy++;
	}
	return (NULL);
}
