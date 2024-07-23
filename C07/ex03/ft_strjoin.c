/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 21:03:08 by racamach          #+#    #+#             */
/*   Updated: 2024/07/23 17:16:53 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);
int		total_length(int size, char **strs, char *sep);

char	*ft_strcat(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*d)
	{
		d++;
	}
	while (*src)
	{
		*d++ = *src++;
	}
	*d = '\0';
	return (dest);
}

int	total_length(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (size - 1)
		{
			len += ft_strlen(sep);
		}
		i++;
	}
	return (len);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;
	int		i;

	if (size == 0)
	{
		res = (char *)malloc(1);
		res[0] = '\0';
		return (res);
	}
	len = total_length(size, strs, sep);
	res = (char *)malloc(len + 1);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}

int	main(void)
{
	char	*strings[] = {"ffdgdg", "sfdsfs", "ffgdgd", "gfgfd", "gdfgf"};
	int		size;
	char	*separator;
	char	*result;

	size = 5;
	separator = ", ";
	result = ft_strjoin(size, strings, separator);
	printf("Joined string: %s\n", result);
	free(result);
	return (0);
}
