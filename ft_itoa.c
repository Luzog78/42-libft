/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzog <luzog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:44:01 by luzog             #+#    #+#             */
/*   Updated: 2023/09/30 18:35:04 by luzog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int integer);
void	fill(char *str, int idx, int integer);
int		int_len(int i);

char	*ft_itoa(int integer)
{
	int		i;
	int		len;
	char	*alpha;

	len = int_len(integer);
	alpha = malloc(sizeof(char) * (len + 1));
	if (alpha == NULL)
		return (NULL);
	if (integer == -2147483648)
	{
		i = 0;
		while (i < 11)
		{
			alpha[i] = "-2147483648"[i];
			i++;
		}
		return (alpha);
	}
	if (integer == 0)
	{
		alpha[0] = '0';
		return (alpha);
	}
	fill(alpha, len - 1, integer);
	return (alpha);
}

void	fill(char *str, int idx, int integer)
{
	if (integer < 0)
	{
		str[0] = '-';
		integer = -integer;
	}
	str[idx] = '0' + (integer % 10);
	integer /= 10;
	if (integer != 0)
		fill(str, idx - 1, integer);
}

int	int_len(int i)
{
	int	len;

	if (i == 0)
		return (1);
	len = 0;
	if (i < 0)
		len++;
	while (i != 0)
	{
		len++;
		i /= 10;
	}
	return (len);
}
