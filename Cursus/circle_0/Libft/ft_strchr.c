/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:44:00 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 12:59:10 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Locates the first occurrence of c in str.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] || (c == '\0' && s[i] == '\0'))
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
    const char s[] = "Diplodocus";
    int c;

    c = 'l';
    printf("%d", ft_strchr(s,c));
}*/
