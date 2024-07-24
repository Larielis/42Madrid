/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 15:01:03 by racamach          #+#    #+#             */
/*   Updated: 2024/07/24 15:42:15 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <limits.h>

void	ft_show_tab(struct s_stock_str *par);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, '\n', 1);
		ft_putnbr(par[i].size);
		write(1, '\n', 1);
		ft_putstr(par[i].copy);
		write(1, '\n', 1);
	}
}
