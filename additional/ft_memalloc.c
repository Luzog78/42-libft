/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzog <luzog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:00:13 by luzog             #+#    #+#             */
/*   Updated: 2023/10/04 02:00:28 by luzog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;
	char	*mem_cpy;

	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	mem_cpy = (char *) mem;
	while (size--)
		*mem_cpy++ = 0;
	return (mem);
}
