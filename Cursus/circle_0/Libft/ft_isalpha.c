/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:42:04 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 22:47:09 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if character c is alphabetic.

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*int main()
{
	int c = 'g';

	printf("%d", ft_isalpha(c));
}*/
