/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:55:12 by racamach          #+#    #+#             */
/*   Updated: 2024/07/24 00:14:37 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(value)           \
	({                       \
		if (value < 0)       \
		{                    \
			return (-value); \
		}                    \
		else                 \
		{                    \
			return (value);  \
		}                    \
	})
#endif

// norminette -R CheckDefine