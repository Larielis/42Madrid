/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:25:27 by racamach          #+#    #+#             */
/*   Updated: 2024/07/10 12:48:49 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);
int		ft_is_alpha(char c);
void	ft_to_lowercase(char *c);
void	ft_to_uppercase(char *c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (ft_is_alpha(str[i]))
		{
			if (new_word)
			{
				ft_to_uppercase(&str[i]);
				new_word = 0;
			}
		}
		else
		{
			new_word = 1;
		}
		i++;
	}
	return (str);
}

int	ft_is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

void	ft_to_lowercase(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		*c += 32;
	}
}

void	ft_to_uppercase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
	{
		*c -= 32;
	}
}

/* int	main(void)
{
	char test1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s \n", ft_strcapitalize(test1));
	return (0);
}
 */