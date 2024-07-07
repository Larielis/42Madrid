/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 00:43:00 by racamach          #+#    #+#             */
/*   Updated: 2024/07/08 01:06:20 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);
int	is_alpha(char c);

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_str_alpha;

	i = 0;
	is_str_alpha = 1;
	while (str[i] != '\0' && is_str_alpha)
	{
		if (!is_alpha(str[i]))
		{
			is_str_alpha = 0;
		}
		i++;
	}
	return (is_str_alpha);
}

int	is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/* int	main(void)
{
	char	test1[] = "HelloWorld";
	char	test2[] = "Hello123";
	char	test3[] = "";

	printf("%s -> %d\n", test1, ft_str_is_alpha(test1));
	printf("%s -> %d\n", test2, ft_str_is_alpha(test2));
	printf("Empty string -> %d\n", ft_str_is_alpha(test3));
	return (0);
}
 */