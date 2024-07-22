/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:31:53 by racamach          #+#    #+#             */
/*   Updated: 2024/07/22 20:47:28 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

int	main(void)
{
	int	*array;
	int	i;
	int	min;
	int	max;

	min = 1;
	max = -2;
	array = ft_range(min, max);
	if (!array)
	{
		printf("Error: null pointer");
		return (1);
	}
	for (i = 0; i < (max - min); i++)
	{
		printf("%d", array[i]);
		printf("\n");
	}
	free(array);
	return (0);
}
