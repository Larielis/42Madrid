/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:27:24 by racamach          #+#    #+#             */
/*   Updated: 2024/07/11 16:00:32 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{	
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
int main()
{
char str1[] = "apple";
char str2[] = "applesauce";
char str3[] = "apricot";
char str4[] = "banana";

printf("Comparing %s and %s: %d\n", str1, str2, ft_strcmp(str1, str2));
printf("Comparing %s and %s: %d\n", str1, str3, ft_strcmp(str1, str3));
printf("Comparing %s and %s: %d\n", str1, str4, ft_strcmp(str1, str4));
printf("Comparing %s and %s: %d\n", str4, str1, ft_strcmp(str4, str1));

printf("Comparing %s and %s: %d\n", str1, str2, strcmp(str1, str2));
printf("Comparing %s and %s: %d\n", str1, str3, strcmp(str1, str3));
printf("Comparing %s and %s: %d\n", str1, str4, strcmp(str1, str4));
printf("Comparing %s and %s: %d\n", str4, str1, strcmp(str4, str1));


return 0;
}
*/