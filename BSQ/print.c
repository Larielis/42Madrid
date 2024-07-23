/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:11:06 by racamach          #+#    #+#             */
/*   Updated: 2024/07/23 10:11:09 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <unistd.h>

void	print_map(t_map *map)
{
	int	i;

	i = 0;
	while (i < map->lines)
	{
		write(1, map->grid[i], ft_strlen(map->grid[i]));
		write(1, "\n", 1);
		i++;
	}
}
