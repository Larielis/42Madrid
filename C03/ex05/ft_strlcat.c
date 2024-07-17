/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:49:26 by racamach          #+#    #+#             */
/*   Updated: 2024/07/17 15:02:50 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void			ft_memcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat_2(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcat_3(char *dest, char *src, unsigned int size);


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

unsigned int	ft_strlcat_2(char *dest, char *src, unsigned int size)
{
	char		*dest_end;
	int			remaining_size;
	char		*source;
	int			dest_length;

	dest_end = dest;
	source = src;
	remaining_size = size;
	while (remaining_size-- != 0 && *dest_end != '\0')
		dest_end++;
	dest_length = dest_end - dest;
	remaining_size = size - dest_length;
	if (remaining_size == 0)
		return (dest_length + ft_strlen(source));
	while (*source != '\0')
	{
		if (remaining_size != 1)
		{
			*dest_end++ = *source;
			remaining_size--;
		}
		source++;
	}
	*dest_end = '\0';
	return (dest_length + (source - src));
}

/*
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
*/
unsigned int	ft_strlcat_3(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;
	unsigned int	j;

	len_dest = 0;
	len_src = 0;
	i = 0;
	j = 0;
	while (dest[len_dest] && len_dest < size)
	{
		len_dest++;
	}
	while (src[len_src])
	{
		len_src++;
	}
	if (size <= len_dest)
	{
		return (size + len_src);
	}
	while (src[j] && i < size - 1)
	{
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}

unsigned int	ft_strlcat_4(char *dest, char *src, unsigned int size)
{
	unsigned int dest_size;
	unsigned int total_len;
	unsigned int src_size;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	total_len = 0;
	while (src[total_len] != '\0' && j < size)
	{
		dest[dest_size + total_len] = src[total_len];
		total_len++;
	}
	dest[dest_size + total_len] = '\0';
	return (src_size + size);
}


int main()
{
	const char dest1[20] = "Hello, ";
	const char dest2[20] = "Hello, ";
	char src[] = "World!";
	unsigned int size = 15;
	unsigned int result1, result2;
	
	result1 = ft_strlcat_2(dest1, src, size);
	result2 = ft_strlcat_2(dest2, src, size);
	printf("ft_strlcat result: %u, dest: %s\n", result1, dest1);
	printf("ft_strlcat_3 result: %u, dest: %s\n", result2, dest2);
	return 0;

}