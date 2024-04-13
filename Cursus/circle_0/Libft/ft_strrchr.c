/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:45:30 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 01:53:13 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Locates the last occurrence of c in str.

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	while (i != 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}

/*int main()
{
    const char str[] = "Diplodocus";
    int c;

    c = 'o';
    printf("%s", ft_strrchr(str,c));
}*/
