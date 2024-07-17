/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:03:44 by racamach          #+#    #+#             */
/*   Updated: 2024/07/17 18:48:53 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_number(char c);
int		ft_atoi(char *str);
int		ft_isspace(char c);
char	*num_as_str(char *str);

int	ft_atoi(char *str)
{
	str++;
	str = num_as_str(str);
	return (0);
}

int	ft_isspace(char c)
{
	return (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
		|| c == 32);
}

char	*num_as_str(char *str)
{
	int	num_len;
	int	i;

	i = 0;
	num_len = 0;
	while (str[i] != '\0')
	{
		if (is_number(str[i]))
		{
			num_len++;
		}
		i++;
	}
	return (&str[i - num_len]);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	argc++;
	printf("%d", ft_atoi(argv[1]));
	return (0);
}
