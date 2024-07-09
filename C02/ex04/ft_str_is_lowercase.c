/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:37:59 by racamach          #+#    #+#             */
/*   Updated: 2024/07/09 12:54:24 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);
int	ft_char_is_lowercase(char c);

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	str_is_lowercase;

	i = 0;
	str_is_lowercase = 1;
	while (str[i] != '\0' && str_is_lowercase)
	{
		if (!ft_char_is_lowercase(str[i]))
		{
			str_is_lowercase = 0;
		}
		i++;
	}
	return (str_is_lowercase);
}

int	ft_char_is_lowercase(char c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}
/* 
int	main(void)
{
	char	test1[] = "1234567890";
	char	test2[] = "1234abcd";
	char	test3[] = "";
	char	test4[] = "abcdefgh";
	char	test5[] = "ABCDEFGH";
	char	test6[] = "AbCdEfGh";
	printf("%s -> %d\n", test1, ft_str_is_lowercase(test1));
	printf("%s -> %d\n", test2, ft_str_is_lowercase(test2));
	printf("Empty string %s-> %d\n", test3, ft_str_is_lowercase(test3));
	printf("%s -> %d\n", test4, ft_str_is_lowercase(test4));
	printf("%s -> %d\n", test5, ft_str_is_lowercase(test5));
	printf("%s -> %d\n", test6, ft_str_is_lowercase(test6));
	return (0);
}
 */