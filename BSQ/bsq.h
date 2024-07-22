/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:11:57 by racamach          #+#    #+#             */
/*   Updated: 2024/07/22 15:13:59 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# define EMPTY '.'
# define OBSTACLE 'o'
# define FULL 'x'

# define ROWS 9
# define COLS 28

void	printMaxSubSquare(char map[ROWS][COLS]);

#endif