/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:47:06 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/09 20:47:13 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *aux_line, char *buffer, int read_bytes)
{
	char	*str;
	int		i;
	int		j;

	if (!aux_line)
		aux_line = ft_calloc(1, 1);
	str = malloc((ft_strlen(aux_line) + read_bytes + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (aux_line[j])
		str[i++] = aux_line[j++];
	j = 0;
	while (j < read_bytes)
		str[i++] = buffer[j++];
	str[i] = '\0';
	free (aux_line);
	return (str);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		*((char *)p + i) = 0;
		i++;
	}
	return (p);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!(*s))
			return (NULL);
		s++;
	}
	return ((char *)s);
}
