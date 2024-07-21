/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:25:35 by racamach          #+#    #+#             */
/*   Updated: 2024/07/21 15:31:09 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

int	main(void)
{
	printf("%d \n", ft_recursive_power(0, 0));
	printf("%d \n", ft_recursive_power(0, 1));
	printf("%d \n", ft_recursive_power(1, 0));
	printf("%d \n", ft_recursive_power(3, 2));
	printf("%d \n", ft_recursive_power(3, -2));
	printf("%d \n", ft_recursive_power(-3, 3));
	printf("%d \n", ft_recursive_power(-3, 2));
	return (0);
}
