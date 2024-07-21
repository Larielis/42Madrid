/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 20:32:50 by racamach          #+#    #+#             */
/*   Updated: 2024/07/21 15:34:04 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	printf("%d ", ft_fibonacci(0));
	printf("%d ", ft_fibonacci(1));
	printf("%d ", ft_fibonacci(2));
	printf("%d ", ft_fibonacci(3));
	printf("%d ", ft_fibonacci(4));
	printf("%d ", ft_fibonacci(5));
}
