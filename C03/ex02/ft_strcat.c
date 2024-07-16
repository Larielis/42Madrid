/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:16:00 by racamach          #+#    #+#             */
/*   Updated: 2024/07/16 18:54:49 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
void	ft_memcpy(char *dest, char *src, unsigned int size);

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	ft_memcpy(dest + dest_len, src, src_len + 1);
	return (dest);
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

void	ft_memcpy(char *dest, char *src, unsigned int size)
{
	while (size--)
	{
		*dest++ = *src++;
	}
}

/*
int	main(void)
{
	char	dest[50] = "Hello, ";
	char	src[] = "World!";
	char	expected_result[50] = "Hello, World!";
	char	dest2[50] = "";
	char	src2[] = "Hello";
	char	expected_result2[50] = "Hello";
	char	dest3[50] = "Hello";
	char	src3[] = "";
	char	expected_result3[50] = "Hello";
	char	dest4[50] = "";
	char	src4[] = "";
	char	expected_result4[50] = "";

	// Test case 1
	ft_strcat(dest, src);
	printf("Test 1: ");
	if (strcmp(dest, expected_result) == 0)
		printf("Passed\n");
	else
		printf("Failed\n");
	// Test case 2
	ft_strcat(dest2, src2);
	printf("Test 2: ");
	if (strcmp(dest2, expected_result2) == 0)
		printf("Passed\n");
	else
		printf("Failed\n");
	// Test case 3
	ft_strcat(dest3, src3);
	printf("Test 3: ");
	if (strcmp(dest3, expected_result3) == 0)
		printf("Passed\n");
	else
		printf("Failed\n");
	// Test case 4
	ft_strcat(dest4, src4);
	printf("Test 4: ");
	if (strcmp(dest4, expected_result4) == 0)
		printf("Passed\n");
	else
		printf("Failed\n");
	return (0);
}
*/