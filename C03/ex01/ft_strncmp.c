/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:04:08 by racamach          #+#    #+#             */
/*   Updated: 2024/07/16 18:54:43 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
	}
	return (0);
}

/*
int	main(void)
{
char	str1[] = "apple";
char	str2[] = "applesauce";
char	str3[] = "apricot";
char	str4[] = "banana";

printf("Comparing %s and %s: %d\n", str1, str2, ft_strncmp(str1, str2, 5));
printf("Comparing %s and %s: %d\n", str1, str3, ft_strncmp(str1, str3, 5));
printf("Comparing %s and %s: %d\n", str1, str4, ft_strncmp(str1, str4, 3));
printf("Comparing %s and %s: %d\n", str4, str1, ft_strncmp(str4, str1, 1));
printf("Comparing %s and %s: %d\n", str1, str2, strncmp(str1, str2, 5));
printf("Comparing %s and %s: %d\n", str1, str3, strncmp(str1, str3, 5));
printf("Comparing %s and %s: %d\n", str1, str4, strncmp(str1, str4, 3));
printf("Comparing %s and %s: %d\n", str4, str1, strncmp(str4, str1, 1));
return (0);
}
*/