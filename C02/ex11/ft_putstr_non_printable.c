/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:49:54 by racamach          #+#    #+#             */
/*   Updated: 2024/07/10 15:09:13 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);
int		ft_char_is_printable(char c);

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (!ft_char_is_printable(str[i]))
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned char) str[i] / 16], 1);
			write(1, &hex[(unsigned char) str[i] % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	ft_char_is_printable(char c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);
}

/* int	main(void)
{
	char test1[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(test1);
	return (0);
} */
