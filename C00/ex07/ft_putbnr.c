/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbnr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 20:41:20 by racamach          #+#    #+#             */
/*   Updated: 2024/07/07 21:14:34 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

/* int	main(void)
{
	ft_putnbr(12345);
	ft_putchar('\n');
	ft_putnbr(-12345);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(INT_MIN);
	ft_putchar('\n');
	ft_putnbr(INT_MAX);
	ft_putchar('\n');
	return (0);
}
 */