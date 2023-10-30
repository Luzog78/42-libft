/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysabik <ysabik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 02:29:27 by luzog             #+#    #+#             */
/*   Updated: 2023/10/30 18:43:59 by ysabik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nxt;

	while (*alst)
	{
		nxt = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = nxt;
	}
}
