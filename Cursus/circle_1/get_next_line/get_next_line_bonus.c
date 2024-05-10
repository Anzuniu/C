/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:46:41 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/04 14:06:11 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include "limits.h"

char	*ft_read_fd(int fd, char *aux_line);
char	*ft_get_line(char *aux_line);
char	*ft_remove_line(char *aux_line);

char	*get_next_line(int fd)
{
	static char	*aux_line[FOPEN_MAX];
	char		*line;

	if (fd < 0 || fd >= FOPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	aux_line[fd] = ft_read_fd(fd, aux_line[fd]);
	if (!aux_line[fd])
		return (NULL);
	line = ft_get_line(aux_line[fd]);
	aux_line[fd] = ft_remove_line(aux_line[fd]);
	if (!line)
		free (aux_line[fd]);
	return (line);
}

char	*ft_read_fd(int fd, char *aux_line)
{
	char	*buffer;
	int		read_bytes;

	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(buffer, '\n') && read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(aux_line);
			free(buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		aux_line = ft_strjoin(aux_line, buffer, read_bytes);
	}
	free(buffer);
	if (ft_strlen(aux_line) == 0)
		return (free(aux_line), NULL);
	return (aux_line);
}

char	*ft_get_line(char *aux_line)
{
	char	*line;
	size_t	i;

	line = ft_calloc((ft_strlen(aux_line) + 1), sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (aux_line[i] != '\n' && aux_line[i] != '\0')
	{
		line[i] = aux_line[i];
		i++;
	}
	if (aux_line[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*ft_remove_line(char *aux_line)
{
	char	*new_aux_line;
	size_t	i;
	size_t	j;

	i = 0;
	while (aux_line[i] && aux_line[i] != '\n')
		i++;
	if (ft_strlen(aux_line) - i <= 0)
	{
		free(aux_line);
		aux_line = NULL;
		return (NULL);
	}
	new_aux_line = ft_calloc(ft_strlen(aux_line) - i + 1, sizeof(char));
	if (!new_aux_line)
		return (NULL);
	i++;
	j = 0;
	while (aux_line[i] != '\0')
		new_aux_line[j++] = aux_line[i++];
	free(aux_line);
	return (new_aux_line);
}
