/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 23:30:31 by racamach          #+#    #+#             */
/*   Updated: 2024/07/08 00:18:53 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	size;
	int	i;

	i = 0;
	size = ft_strlen(src);
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

/* int	main(void)
{
    char src[] = "Hello, World!";
    char dest[42];

    ft_strcpy(dest, src);
    printf("Copied string: %s\n", dest);

    printf("Length of copied string: %d\n", ft_strlen(dest));

    return 0;
} */
