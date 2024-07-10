/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:24:15 by racamach          #+#    #+#             */
/*   Updated: 2024/07/10 20:12:28 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);
int	ft_char_is_printable(char c);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_printable(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
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
	char	test1[] = "1234567890";
	char	test2[] = "1234abcd";
	char	test3[] = "";
	char	test4[] = "abcdefgh";
	char	test5[] = "ABCDEFGH";
	char	test6[] = "AbCdEfGh";
	char	test7[] = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
	char	test8[] = "Ab\tCdEfGh";
	char	test9[] = "Ab\nCdEfGh";

	printf("%s -> %d\n", test1, ft_str_is_printable(test1));
	printf("%s -> %d\n", test2, ft_str_is_printable(test2));
	printf("Empty string %s-> %d\n", test3, ft_str_is_printable(test3));
	printf("%s -> %d\n", test4, ft_str_is_printable(test4));
	printf("%s -> %d\n", test5, ft_str_is_printable(test5));
	printf("%s -> %d\n", test6, ft_str_is_printable(test6));
	printf("%s -> %d\n", test7, ft_str_is_printable(test7));
	printf("%s -> %d\n", test8, ft_str_is_printable(test8));
	printf("%s -> %d\n", test9, ft_str_is_printable(test9));
	return (0);
} */
