/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzog <luzog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:43:18 by luzog             #+#    #+#             */
/*   Updated: 2023/09/28 15:08:04 by luzog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char const *str);
int	ft_is_whitespace(char c);

int	ft_atoi(char const *str)
{
	int		sum;
	int		negative_multiplier;

	while (ft_is_whitespace(*str))
		str++;
	negative_multiplier = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative_multiplier *= -1;
		str++;
	}
	sum = 0;
	while ('0' <= *str && *str <= '9')
	{
		sum = sum * 10 + *str - '0';
		str++;
	}
	return (sum * negative_multiplier);
}

int	ft_is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r');
}
