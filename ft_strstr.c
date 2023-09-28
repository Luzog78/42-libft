/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luzog <luzog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:36:27 by luzog             #+#    #+#             */
/*   Updated: 2023/09/28 15:13:41 by luzog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char const *to_find);
int		ft_find_exact(char const *str, char const *to_find);

char	*ft_strstr(char *str, char const *to_find)
{
	if (!(*to_find))
		return (str);
	while (*str)
	{
		if (ft_find_exact(str, to_find))
			return (str);
		str++;
	}
	return (0);
}

int	ft_find_exact(char const *str, char const *to_find)
{
	int	i;

	i = 0;
	while (str[i] && to_find[i])
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	if (to_find[i])
		return (0);
	return (1);
}
