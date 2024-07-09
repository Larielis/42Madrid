/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:43:08 by racamach          #+#    #+#             */
/*   Updated: 2024/07/09 18:30:16 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);
int		ft_char_is_uppercase(char c);

int	ft_char_is_uppercase(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_uppercase(str[i]))
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