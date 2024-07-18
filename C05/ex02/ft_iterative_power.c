/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:27:12 by racamach          #+#    #+#             */
/*   Updated: 2024/07/18 18:35:55 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
}
