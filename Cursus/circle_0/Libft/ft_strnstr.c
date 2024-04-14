/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:45:21 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/14 01:52:43 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	i;
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && size >= needle_len)
	{
		i = 0;
		while (haystack[i] == needle[i] && haystack[i] && needle[i])
			i++;
		if (i == needle_len)
			return ((char *)haystack);
		haystack++;
		size--;
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
