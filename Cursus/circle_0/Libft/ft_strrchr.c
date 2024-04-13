/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:45:30 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 13:09:42 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Locates the last occurrence of c in str.

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	last_o;

	i = 0;
	last_o = -1;
	while (str[i] || (c == '\0' && str[i] == '\0'))
	{
		if (str[i] == c)
			last_o = i;
		i++;
	}
	if (last_o != (size_t)-1)
		return ((char *)&str[last_o]);
	return (NULL);
}

/*int main()
{
    const char str[] = "Diplodocus";
    int c;

    c = 'o';
    printf("%s", ft_strrchr(str,c));
}*/
