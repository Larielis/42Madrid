/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:36:12 by racamach          #+#    #+#             */
/*   Updated: 2024/07/22 16:59:39 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

int	min(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}
	return (min);
}
void	printMaxSubSquare(char map[ROWS][COLS])
{
	int	S[ROWS][COLS];

	int i, j;
	int max_of_s, max_i, max_j;
	for (i = 0; i < ROWS; i++)
	{
		S[i][0] = (map[i][0] == EMPTY) ? 1 : 0;
	}
	for (j = 0; j < COLS; j++)
	{
		S[0][j] = (map[0][j] == EMPTY) ? 1 : 0;
	}
	for (i = 1; i < ROWS; i++)
	{
		for (j = 1; j < COLS; j++)
		{
			if (map[i][j] == EMPTY)
			{
				S[i][j] = min(S[i][j - 1], S[i - 1][j], S[i - 1][j - 1]) + 1;
			}
			else
			{
				S[i][j] = 0;
			}
		}
	}
	max_of_s = S[0][0];
	max_i = 0;
	max_j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			if (max_of_s < S[i][j])
			{
				max_of_s = S[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}
	printf("Maximum size sub-matrix is: \n");
	for (i = max_i; i > max_i - max_of_s; i--)
	{
		for (j = max_j; j > max_j - max_of_s; j--)
		{
			map[i][j] = FULL;
		}
	}
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			printf("%c ", map[i][j]);
		}
		printf("\n");
	}
}
int	main(int argc, char **argv)
{
	char map[ROWS][COLS] = {"...........................",
		"....o......................", "............o..............",
		"...........................", "....o......................",
		"...............o...........", "...........................",
		"......o..............o.....", "..o.......o................"};
	printMaxSubSquare(map);
	// o = 0
	// . = 1
	return (0);
}