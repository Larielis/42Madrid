/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racamach <racamach@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:10:17 by racamach          #+#    #+#             */
/*   Updated: 2024/07/23 10:17:33 by racamach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

extern int	ft_strlen(char *str);
extern void	*ft_memcpy(void *dst, const void *src, size_t n);

char	*read_file(const char *file)
{
	int		fd;
	int		bytes_read;
	char	*buffer;

	buffer = (char *)malloc(BUF_SIZE + 1);
	if (!buffer)
		return (NULL);
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	bytes_read = read(fd, buffer, BUF_SIZE);
	if (bytes_read == -1)
	{
		close(fd);
		return (NULL);
	}
	buffer[bytes_read] = '\0';
	close(fd);
	return (buffer);
}

t_map	*parse_map(char *buffer)
{
	t_map	*map;
	char	*line;
	int		i;
	size_t	len;

	i = 0;
	map = (t_map *)malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	line = buffer;
	while (buffer[i] != '\n' && buffer[i] != '\0')
		i++;
	buffer[i] = '\0';
	sscanf(line, "%d%c%c%c", &map->lines, &map->empty, &map->obstacle,
		&map->full);
	map->grid = (char **)malloc(map->lines * sizeof(char *));
	i++;
	line = buffer + i;
	for (int j = 0; j < map->lines; j++)
	{
		len = ft_strlen(line);
		map->grid[j] = (char *)malloc((len + 1) * sizeof(char));
		ft_memcpy(map->grid[j], line, len);
		map->grid[j][len] = '\0';
		line += len + 1;
	}
	return (map);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}