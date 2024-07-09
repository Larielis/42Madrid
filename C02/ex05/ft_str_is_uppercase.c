/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 14:49:05 by racamach          #+#    #+#             */
/*   Updated: 2024/07/09 14:59:50 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);
int	ft_char_is_uppercase(char c);

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	str_is_uppercase;

	i = 0;
	str_is_uppercase = 1;
	while (str[i] != '\0' && str_is_uppercase)
	{
		if (!ft_char_is_uppercase(str[i]))
		{
			str_is_uppercase = 0;
		}
		i++;
	}
	return (str_is_uppercase);
}

int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	main(void)
{
	char	test1[] = "1234567890";
	char	test2[] = "1234abcd";
	char	test3[] = "";
	char	test4[] = "abcdefgh";
	char	test5[] = "ABCDEFGH";
	char	test6[] = "AbCdEfGh";
	printf("%s -> %d\n", test1, ft_str_is_uppercase(test1));
	printf("%s -> %d\n", test2, ft_str_is_uppercase(test2));
	printf("Empty string %s-> %d\n", test3, ft_str_is_uppercase(test3));
	printf("%s -> %d\n", test4, ft_str_is_uppercase(test4));
	printf("%s -> %d\n", test5, ft_str_is_uppercase(test5));
	printf("%s -> %d\n", test6, ft_str_is_uppercase(test6));
	return (0);
}
