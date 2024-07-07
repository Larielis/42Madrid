/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:15:07 by racamach          #+#    #+#             */
/*   Updated: 2024/07/07 20:43:54 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr_two_digits(int n);
void	ft_print(int i, int j);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_two_digits(int n)
{
	if (n >= 10)
	{
		ft_putnbr_two_digits(n / 10);
	}
	ft_putchar((n % 10) + '0');
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print(i, j);
			j++;
		}
		i++;
	}
	write(1, "\n", 2);
}

void	ft_print(int i, int j)
{
	if (i < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr_two_digits(i);
	ft_putchar(' ');
	if (j < 10)
	{
		ft_putchar('0');
	}
	ft_putnbr_two_digits(j);
	if (i != 98 || j != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
