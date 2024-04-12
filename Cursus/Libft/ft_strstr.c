/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:45:38 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 02:48:47 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	printf ("s1: %s\nset: %s\n\n", haystack, needle);
	while (haystack[i])
	{
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == 0)
			return (&haystack[i - j]);
		j = 0;
		i++;
	}
	return (haystack);
}

/*int main()
{
    const char  haystack[] = "Como estan los maquinas, lo primero de todo";
    const char  needle[] = "ma";

    printf("%s", ft_strstr(haystack,needle));
}*/
