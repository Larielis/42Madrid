/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 21:06:23 by racamach          #+#    #+#             */
/*   Updated: 2024/07/21 19:12:58 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d \n", ft_sqrt(-4));
	printf("%d \n", ft_sqrt(0));
	printf("%d \n", ft_sqrt(1));
	printf("%d \n", ft_sqrt(4));
	printf("%d \n", ft_sqrt(9));
	printf("%d \n", ft_sqrt(16));
	printf("%d \n", ft_sqrt(25));
}
