/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:49:26 by racamach          #+#    #+#             */
/*   Updated: 2024/07/16 18:55:15 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void			ft_memcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;
	unsigned int	copy_len;

	copy_len = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (dest_len + 1 < size)
	{
		copy_len = size - dest_len - 1;
		if (src_len < copy_len)
		{
			copy_len = src_len;
		}
		ft_memcpy(dest + dest_len, src, copy_len);
	}
	dest[dest_len + copy_len] = '\0';
	return (total_len);
}

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_memcpy(char *dest, char *src, unsigned int size)
{
	while (size--)
	{
		*dest++ = *src++;
	}
}

/*
int	main(void){
	char dest1[50] = "Hello, ";
	char str1[] = "World!";
	unsigned int n1 = 50;
	printf("Before stlcat: %s \n", dest1);
	unsigned int ret1 = ft_strlcat(dest1, str1, n1);
	printf("After strlcat: %s \n", dest1);
	printf("Total len: %d \n", ret1);
	return (0);
}
*/