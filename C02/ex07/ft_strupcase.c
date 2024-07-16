/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:43:08 by racamach          #+#    #+#             */
/*   Updated: 2024/07/16 11:02:28 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);
int		ft_char_is_lowercase(char c);

int	ft_char_is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_lowercase(str[i]))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	test1[] = "abcdefgh";
	char	test2[] = "AbCdEfgH";
	printf("%s \n", ft_strupcase(test1));
	printf("%s \n", ft_strupcase(test2));
	return (0);
}
 */