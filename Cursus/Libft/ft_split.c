/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:43:51 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 03:16:49 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Splits a string into others strings.

#include "libft.h"

char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	free_s(char **s);

/*int main()
{
	char const	s[] = "Como estan los maquinas, lo primero de todo.";
	char	c = 'm';
	char	**split = ft_split(s,c);
    int i = 0;

    while(split[i] != NULL)
        printf("%s\n",split[i++]);
    free_s(split);
}*/

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	**tmp;
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	len;
	size_t	num_strings;
	char	*substr;

	split = NULL;
	i = 0;
	start = 0;
	num_strings = 0;
	while (s[i])
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			len = (s[i] == c) ? i - start : i - start + 1;
			substr = ft_substr(s, start, len);
			if (substr == NULL)
			{
				free_s(split);
				return (NULL);
			}
			tmp = (char **)malloc((num_strings + 2) * sizeof(char *));
			if (tmp == NULL)
			{
				free(substr);
				free_s(split);
				return (NULL);
			}
			j = 0;
			while (j < num_strings)
			{
				tmp[j] = split[j];
				j++;
			}
			tmp[num_strings++] = substr;
			tmp[num_strings] = NULL;
			free(split);
			split = tmp;
			start = i + 1;
		}
		i++;
	}
	return (split);
}

void	free_s(char **s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != NULL)
		free(s[i++]);
	free(s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*cpy;

	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[j])
		j++;
	if (start >= j)
	{
		cpy = malloc(1);
		if (cpy == NULL)
			return (NULL);
		cpy[0] = '\0';
		return (cpy);
	}
	i = start;
	cpy = malloc(len + 1);
	if (cpy == NULL)
		return (NULL);
	while (i < (start + len) && i < j)
	{
		cpy[i - start] = s[i];
		i++;
	}
	cpy[i - start] = 0;
	return (cpy);
}
