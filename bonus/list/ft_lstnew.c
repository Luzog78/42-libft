/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabik <ysabik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:20:06 by luzog             #+#    #+#             */
/*   Updated: 2023/10/30 18:44:09 by ysabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *) malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (content == NULL)
	{
		new->content_size = 0;
		new->content = NULL;
	}
	else
	{
		new->content_size = content_size;
		new->content = (void *) malloc(sizeof(content_size));
		if (!new->content)
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, content, content_size);
	}
	new->next = NULL;
	return (new);
}
