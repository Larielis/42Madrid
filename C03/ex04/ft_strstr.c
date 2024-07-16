/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:57:52 by racamach          #+#    #+#             */
/*   Updated: 2024/07/16 18:55:08 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlen(char *str);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_str;
	unsigned int	len_find;

	i = 0;
	len_str = ft_strlen(str);
	len_find = ft_strlen(to_find);
	if (len_find == 0)
		return (str);
	if (len_find > len_str)
		return (NULL);
	while (i <= len_str - len_find)
	{
		j = 0;
		while (j < len_find && str[i + j] == to_find[j])
			j++;
		if (j == len_find)
			return (&str[i]);
		i++;
	}
	return (NULL);
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

/*
void	test_strstr(char *haystack, char *needle)
{
	char	*result_strstr;
	char	*result_ft_strstr;

	result_strstr = strstr(haystack, needle);
	result_ft_strstr = ft_strstr(haystack, needle);
	if (result_strstr == result_ft_strstr)
	{
		printf("PASS: haystack = \"%s\", needle = \"%s\"\n", haystack, needle);
	}
	else
	{
		printf("FAIL: haystack = \"%s\", needle = \"%s\"\n", haystack, needle);
		printf("  strstr    = \"%s\"\n",
			result_strstr ? result_strstr : "NULL");
		printf("  ft_strstr = \"%s\"\n",
			result_ft_strstr ? result_ft_strstr : "NULL");
	}
}

int	main(void)
{
	char	haystack1[] = "hello world";
	char	haystack2[] = "hello world";
	char	haystack3[] = "hello world";
	char	haystack4[] = "";
	char	haystack5[] = "";
	char	haystack6[] = "abcdef";
	char	haystack7[] = "abcdef";
	char	haystack8[] = "abcdef";
	char	haystack9[] = "abcdef";
	char	haystack10[] = "abcdef";

	// Test cases
	test_strstr(haystack1, "world");
	test_strstr(haystack2, "worlds");
	test_strstr(haystack3, "");
	test_strstr(haystack4, "world");
	test_strstr(haystack5, "");
	test_strstr(haystack6, "def");
	test_strstr(haystack7, "de");
	test_strstr(haystack8, "f");
	test_strstr(haystack9, "abcdef");
	test_strstr(haystack10, "abcdefg");
	return (0);
}
*/