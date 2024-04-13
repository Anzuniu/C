/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:44:53 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 01:50:46 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Computes the length of the string str.

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*int main()
{
    const char s[] = "Diplodocus";
    printf("%d", ft_strlen(s));
}*/
