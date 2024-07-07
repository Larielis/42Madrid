/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 01:01:17 by racamach          #+#    #+#             */
/*   Updated: 2024/07/08 01:01:40 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);
int	is_number(char c);

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_str_numeric;

	i = 0;
	is_str_numeric = 1;
	while (str[i] != '\0' && is_str_numeric)
	{
		if (!is_number(str[i]))
		{
			is_str_numeric = 0;
		}
		i++;
	}
	return (is_str_numeric);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/* int	main(void)
{
	char	test1[] = "1234567890";
	char	test2[] = "1234abcd";
	char	test3[] = "";
	printf("%s -> %d\n", test1, ft_str_is_numeric(test1));
	printf("%s -> %d\n", test2, ft_str_is_numeric(test2));
	printf("Empty string %s-> %d\n", test3, ft_str_is_numeric(test3));
	return (0);
}
 */