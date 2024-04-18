/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:45:44 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 01:10:37 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Removes specified characters from the beginning and end of a string.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i != 0)
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*int main()
{
    const char  s1[] = "Como estan los maquinas";
    const char  set[] = "omo estan los maqui";

    printf("\n\n%s", ft_strtrim(s1,set));
}*/
