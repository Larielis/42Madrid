/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:27:12 by racamach          #+#    #+#             */
/*   Updated: 2024/07/21 15:23:38 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

int main(void)
{	
	printf("%d \n", ft_iterative_power(0, 0));
	printf("%d \n", ft_iterative_power(0, 1));
	printf("%d \n", ft_iterative_power(1, 0));
	printf("%d \n", ft_iterative_power(3, 2));
	printf("%d \n", ft_iterative_power(3, -2));
	printf("%d \n", ft_iterative_power(-3, 3));
	printf("%d \n", ft_iterative_power(-3, 2));
	return (0);
}
