/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtrack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:10:41 by racamach          #+#    #+#             */
/*   Updated: 2024/07/23 10:10:47 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	can_place_square(t_map *map, int i, int j, int size)
{
	int x, y;
	for (x = i; x < i + size; x++)
	{
		if (x >= map->lines || j + size > ft_strlen(map->grid[x]))
			return (0);
		for (y = j; y < j + size; y++)
		{
			if (map->grid[x][y] == map->obstacle)
				return (0);
		}
	}
	return (1);
}

void	place_square(t_map *map, int i, int j, int size)
{
	int x, y;
	for (x = i; x < i + size; x++)
	{
		for (y = j; y < j + size; y++)
		{
			map->grid[x][y] = map->full;
		}
	}
}

void	find_largest_square(t_map *map)
{
	int	max_size = 0, max_i = 0, max_j;

	max_size = 0, max_i = 0, max_j = 0;
	int i, j, size;
	for (i = 0; i < map->lines; i++)
	{
		for (j = 0; j < ft_strlen(map->grid[i]); j++)
		{
			size = 1;
			while (can_place_square(map, i, j, size))
			{
				size++;
			}
			size--;
			if (size > max_size)
			{
				max_size = size;
				max_i = i;
				max_j = j;
			}
		}
	}
	if (max_size > 0)
	{
		place_square(map, max_i, max_j, max_size);
	}
}
