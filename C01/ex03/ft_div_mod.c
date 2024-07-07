/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:28:18 by racamach          #+#    #+#             */
/*   Updated: 2024/07/07 21:40:19 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}
}

/* int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("División: %d\n", div);
	printf("Módulo: %d\n", mod);
	return (0);
} */
