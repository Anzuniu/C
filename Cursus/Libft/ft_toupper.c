/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:46:16 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 12:47:04 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts character c to uppercase if it's lowercase.

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

int main()
{
    int	c = 'd';

    printf("%c",ft_toupper(c));
    return (0);
}
