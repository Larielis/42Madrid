/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:11:57 by racamach          #+#    #+#             */
/*   Updated: 2024/07/23 10:15:51 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# define BUF_SIZE 4096

typedef struct s_map
{
	int		lines;
	char	empty;
	char	obstacle;
	char	full;
	char	**grid;
}			t_map;

char		*read_file(const char *file);
t_map		*parse_map(char *buffer);
void		find_largest_square(t_map *map);
void		print_map(t_map *map);
int			can_place_square(t_map *map, int i, int j, int size);
void		place_square(t_map *map, int i, int j, int size);
int			ft_strlen(char *str);

#endif
