/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:17:27 by racamach          #+#    #+#             */
/*   Updated: 2024/07/21 17:35:34 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}

int	main(void)
{
	printf("%d \n", ft_iterative_factorial(-1223));
	printf("%d \n", ft_iterative_factorial(0));
	printf("%d \n", ft_iterative_factorial(1));
	printf("%d \n", ft_iterative_factorial(2));
}
