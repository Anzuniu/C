/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:44:00 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 19:08:10 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Locates the first occurrence of c in str.

#include "libft.h"

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

/*int main()
{
    const char s[] = "Diplodocus";
    int c;

    c = 'l';
    printf("%d", ft_strchr(s,c));
}*/
