/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:45:21 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 03:02:06 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (needle[i])
		i++;
	if (size < i)
		return (NULL);
	i = 0;
	j = 0;
	while (haystack[i] && i < size)
	{
		while ((haystack[i] == needle[j])
			&& haystack[i] && needle[j] && i < size)
		{
			i++;
			j++;
		}
		if (needle[j] == 0)
			return ((char *)&haystack[i - j]);
		j = 0;
		i++;
	}
	return (NULL);
}

/*int main()
{
    const char  haystack[] = "Como estan los maquinas, lo primero de todo.";
    const char  needle[] = "ri";
    size_t size = 45;

    printf("%s", ft_strnstr(haystack,needle,size));
}*/
