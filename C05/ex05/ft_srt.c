/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 21:06:23 by racamach          #+#    #+#             */
/*   Updated: 2024/07/20 21:41:31 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	temp;
	int	result;

	result = nb / 2;
	temp = 0;
	while (temp != nb)
	{
		temp = result;
		result = (nb / temp + temp) / 2;
	}
	return (result);
}
