/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:27:01 by antonio           #+#    #+#             */
/*   Updated: 2024/05/01 18:03:47 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_fd(int fd, char *aux_line);
char	*ft_get_line(char *aux_line);
char	*ft_remove_line(char *aux_line);

char	*get_next_line(int fd)
{
	static char	*aux_line;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free (aux_line);
		aux_line = NULL;
		return (NULL);
	}
	aux_line = ft_read_fd(fd, aux_line);
	if (!aux_line)
		return (NULL);
	line = ft_get_line(aux_line);
	aux_line = ft_remove_line(aux_line);
	if (!line)
		free (aux_line);
	return (line);
}

char	*ft_read_fd(int fd, char *aux_line)
{
	char	*buffer;
	int		read_bytes;
	char	*save_line;

	save_line = NULL;
	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	read_bytes = 1;
	while (read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(aux_line);
			aux_line = NULL;
			free(buffer);
			return (NULL);
		}
		save_line = aux_line;
		aux_line = ft_strjoin(save_line, buffer, read_bytes);
		if (!aux_line)
		{
			free(save_line);
			free(buffer);
			return (NULL);
		}
		if (read_bytes < BUFFER_SIZE)
			break ;
	}
	free(buffer);
	return (aux_line);
}

char	*ft_get_line(char *aux_line)
{
	char	*line;
	size_t	i;

	i = 0;
	while (aux_line[i] != '\n' && aux_line[i] != '\0')
		i++;
	line = ft_calloc((i + 1 + (aux_line[i] == '\n')), sizeof(char));
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
	line[i] = '\0';
	return (line);
}

char	*ft_remove_line(char *aux_line)
{
	char	*new_aux_line;
	size_t	i;
	size_t	aux_line_len;

	aux_line_len = ft_strlen(aux_line);
	i = 0;
	while (aux_line[i] != '\n' && aux_line[i] != '\0')
		i++;
	if (aux_line[i] == '\0')
	{
		free(aux_line);
		return (NULL);
	}
	i += 1;
	new_aux_line = ft_substr(aux_line, i, (aux_line_len - i));
	free(aux_line);
	return (new_aux_line);
}
