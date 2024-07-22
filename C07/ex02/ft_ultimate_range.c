/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:46:38 by racamach          #+#    #+#             */
/*   Updated: 2024/07/22 21:01:26 by racamach         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = ft_range(min, max);
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	*range = arr;
	size = max - min;
	return (size);
}

int	main(void)
{
	int	*array;
	int	size;
	int	i;
	int	min;
	int	max;

	min = 3;
	max = 10;
	size = ft_ultimate_range(&array, min, max);
	if (size == -1)
	{
		printf("Memory allocation failed \n");
		return (1);
	}
	else if (size == 0)
	{
		printf("Bad range \n");
		return (1);
	}
	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	free(array);
	return (0);
}
