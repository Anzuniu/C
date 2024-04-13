/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:48:03 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 00:56:37 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Extracts a substring from a string.

#include "libft.h"

/*char	*ft_substr(char const *s, unsigned int start, size_t len)
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
}*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, (s + start), len + 1);
	return (substr);
}

/*int main()
{
    char const s[] = "Como estan los maquinas";
    unsigned int start = 0;
    size_t len = 16;

    printf("%s", ft_substr(s, start, len));
}*/
