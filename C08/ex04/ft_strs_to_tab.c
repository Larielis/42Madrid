/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 20:34:06 by racamach          #+#    #+#             */
/*   Updated: 2024/07/24 14:58:00 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	char	len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
	{
		return (NULL);
	}
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*s;
	int			i;

	s = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!s)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		s[i].size = ft_strlen(av[i]);
		s[i].str = av[i];
		s[i].copy = ft_strdup(av[i]);
		if (s[i].copy == NULL)
		{
			while (i > 0)
				free(s[--i].copy);
			free(s);
			return (NULL);
		}
		i++;
	}
	s[ac].str = 0;
	return (s);
}
