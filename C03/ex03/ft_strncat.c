/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:24:22 by racamach          #+#    #+#             */
/*   Updated: 2024/07/11 11:54:12 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char			*ft_strncat(char *dest, char *src, unsigned int nb);
void			ft_memcpy(char *dest, char *src, unsigned int size);
unsigned int	ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = strlen(dest);
	src_len = strlen(src);
	if (src_len < nb)
	{
		ft_memcpy(dest + dest_len, src, src_len + 1);
	}
	else
	{
		ft_memcpy(dest + dest_len, src, nb);
		dest[dest_len + nb] = '\0';
	}
	return (dest);
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
int main()
{
    // Test case 1: src length is less than n
    char dest1[50] = "Hello, ";
    char src1[] = "World!";
    char expected_result1[50];
    strcpy(expected_result1, dest1);
    strncat(expected_result1, src1, 10);

    ft_strncat(dest1, src1, 10);
    printf("Test 1: ");
    if (strcmp(dest1, expected_result1) == 0)
        printf("Passed\n");
    else
        printf("Failed\n");

    // Test case 2: src length is equal to n
    char dest2[50] = "Hello, ";
    char src2[] = "World!";
    char expected_result2[50];
    strcpy(expected_result2, dest2);
    strncat(expected_result2, src2, 6);

    ft_strncat(dest2, src2, 6);
    printf("Test 2: ");
    if (strcmp(dest2, expected_result2) == 0)
        printf("Passed\n");
    else
        printf("Failed\n");

    // Test case 3: src length is greater than n
    char dest3[50] = "Hello, ";
    char src3[] = "World!";
    char expected_result3[50];
    strcpy(expected_result3, dest3);
    strncat(expected_result3, src3, 5);

    ft_strncat(dest3, src3, 5);
    printf("Test 3: ");
    if (strcmp(dest3, expected_result3) == 0)
        printf("Passed\n");
    else
        printf("Failed\n");

    // Test case 4: n is 0
    char dest4[50] = "Hello, ";
    char src4[] = "World!";
    char expected_result4[50];
    strcpy(expected_result4, dest4);
    strncat(expected_result4, src4, 0);

    ft_strncat(dest4, src4, 0);
    printf("Test 4: ");
    if (strcmp(dest4, expected_result4) == 0)
        printf("Passed\n");
    else
        printf("Failed\n");

    // Test case 5: src is empty, n is greater than 0
    char dest5[50] = "Hello, ";
    char src5[] = "";
    char expected_result5[50];
    strcpy(expected_result5, dest5);
    strncat(expected_result5, src5, 5);

    ft_strncat(dest5, src5, 5);
    printf("Test 5: ");
    if (strcmp(dest5, expected_result5) == 0)
        printf("Passed\n");
    else
        printf("Failed\n");

    return 0;
}
*/