/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:58:47 by racamach          #+#    #+#             */
/*   Updated: 2024/07/10 12:44:57 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_memcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*s;
	unsigned int	src_len;
	unsigned int	copy_len;

	s = src;
	src_len = 0;
	while (*s++)
	{
		src_len++;
	}
	if (size != 0)
	{
		if (src_len >= size)
		{
			copy_len = size - 1;
		}
		else
		{
			copy_len = src_len;
		}
		ft_memcpy(dest, src, copy_len);
		dest[copy_len] = '\0';
	}
	return (src_len);
}

void	ft_memcpy(char *dest, char *src, unsigned int size)
{
	while (size--)
	{
		*dest++ = *src++;
	}
}
/* 
int main()
{
	char src[] = "Hello, World";
	char dst[20];
	char dst_small[6];

	unsigned int len = ft_strlcpy(dst, src, sizeof(dst));
	printf("Source: \"%s\"\n", src);
	printf("Destination(suficient size): \"%s\"\n", dst);
	printf("Lenght of source string: %u\n", len);

	len = ft_strlcpy(dst_small, src, sizeof(dst_small));
	printf("Destination(small buffer): \"%s\"\n", dst_small);
	printf("Lenght of source string: %u\n", len);

	return 0;
} */