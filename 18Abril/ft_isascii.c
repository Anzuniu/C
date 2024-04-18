/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:42:11 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 22:49:46 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if character c is an ASCII character.

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int main()
{
	int c = 123;
	printf("%d", ft_isascii(c));
}*/
