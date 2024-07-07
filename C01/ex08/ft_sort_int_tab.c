/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 23:16:06 by racamach          #+#    #+#             */
/*   Updated: 2024/07/07 23:16:07 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swapped;
	int	i;
	int	j;
	int	temp;

	i = 0;
	swapped = 1;
	while (i < size - 1 && swapped)
	{
		j = 0;
		swapped = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
				swapped = 1;
			}
			j++;
		}
		i++;
	}
}

/* int	main(void)
{
	int	arr[] = {5, 2, 9, 1, 5, 6};
	int	size;

	size = 6;
	ft_sort_int_tab(arr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	return (0);
}
 */