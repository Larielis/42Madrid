/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 16:38:26 by racamach          #+#    #+#             */
/*   Updated: 2024/07/21 16:44:17 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(void)
{
	printf("%d \n", ft_is_prime(0));
	printf("%d \n", ft_is_prime(1));
	printf("%d \n", ft_is_prime(2));
	printf("%d \n", ft_is_prime(3));
	printf("%d \n", ft_is_prime(5));
	printf("%d \n", ft_is_prime(7));
	printf("%d \n", ft_is_prime(-10));
	printf("%d \n", ft_is_prime(4));
}
