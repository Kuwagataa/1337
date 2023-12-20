/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hes-safi <hes-safi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:39:55 by hes-safi          #+#    #+#             */
/*   Updated: 2023/12/20 17:30:23 by hes-safi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*parse(int fd, char *cursor, int scan)
{
	char	*buffer;

	buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (scan != 0 && !ft_findnl(cursor))
	{
		scan = read(fd, buffer, BUFFER_SIZE);
		if (scan == -1 || (scan == 0 && (!cursor || !cursor[0])))
		{
			free(cursor);
			free(buffer);
			return (NULL);
		}
		buffer[scan] = '\0';
		cursor = (ft_strjoin(cursor, buffer));
	}
	free(buffer);
	return (cursor);
}

static char	*fetch(char *cursor)
{
	int		i;
	char	*temp;

	i = 0;
	while (cursor[i] && cursor[i] != '\n')
		i++;
	if (cursor[i] == '\n')
		i++;
	temp = malloc(i + 1);
	if (!temp)
		return (NULL);
	i = 0;
	while (cursor[i] && cursor[i] != '\n')
	{
		temp[i] = cursor[i];
		i++;
	}
	if (cursor[i] && cursor[i] == '\n')
		temp[i++] = '\n';
	temp[i] = '\0';
	return (temp);
}

static char	*remaining(char *cursor)
{
	int		i;
	int		j;
	char	*remainder;

	i = 0;
	j = 0;
	while (cursor[i] && cursor[i] != '\n')
		i++;
	remainder = malloc((ft_strlen(cursor) - i));
	if (!remainder)
		return (NULL);
	if (cursor[i] && !cursor[i + 1])
	{
		free(cursor);
		free(remainder);
		return (NULL);
	}
	if (cursor[i])
		i++;
	while (cursor[i])
		remainder[j++] = cursor[i++];
	remainder[j] = '\0';
	free(cursor);
	return (remainder);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*cursor;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= SIZE_MAX)
		return (NULL);
	cursor = parse(fd, cursor, 1);
	if (!cursor)
		return (NULL);
	line = fetch(cursor);
	if (!line)
		return (NULL);
	cursor = remaining(cursor);
	return (line);
}
