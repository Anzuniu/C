/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:48:03 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 03:07:19 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Extracts a substring from a string.

#include "libft.h"

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

/*int main()
{
    char const s[] = "Como estan los maquinas";
    unsigned int start = 0;
    size_t len = 16;

    printf("%s", ft_substr(s,start,len));
}*/
