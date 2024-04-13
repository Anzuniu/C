/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:46:16 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 18:04:26 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts character c to uppercase if it's lowercase.

#include "libft.h"

int	ft_toupper(int n)
{
	if (n >= 'a' && n <= 'z')
		n -= 32;
	return (n);
}

/*int main()
{
    int	n = 'h';

    printf("%c",ft_toupper(n));
    return (0);
}*/
