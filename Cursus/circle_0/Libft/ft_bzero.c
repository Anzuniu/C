/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:41:30 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 18:45:11 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Sets the first size bytes of str to zero.

#include "libft.h"

void	ft_bzero( void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*int main()
{
    char    str[] = "Como estan los maquinas, lo primero de todo";
    int     n = 5;

    ft_bzero(str, n);
    printf("%s", str);
}*/
