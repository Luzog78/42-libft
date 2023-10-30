/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabik <ysabik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:25:47 by luzog             #+#    #+#             */
/*   Updated: 2023/10/30 18:44:02 by ysabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst)->content_size)
		del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
