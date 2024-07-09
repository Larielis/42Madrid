/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:06:15 by racamach          #+#    #+#             */
/*   Updated: 2024/07/09 19:27:01 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);
int		ft_char_is_lowercase(char c);

int	ft_char_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_lowercase(str[i]))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/* 
int	main(void)
{
	char	test1[] = "abcdefgh";
	char	test2[] = "AbCdEfgH";
	printf("%s \n", ft_strlowcase(test1));
	printf("%s \n", ft_strlowcase(test2));
	return (0);
}
 */