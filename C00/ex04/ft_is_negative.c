/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:05:52 by racamach          #+#    #+#             */
/*   Updated: 2024/07/05 08:33:53 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	is_positive;
	char	is_negative;

	is_positive = 'P';
	is_negative = 'N';
	if (n >= 0)
	{
		write(1, &is_positive, 1);
	}
	else
	{
		write(1, &is_negative, 1);
	}
}
