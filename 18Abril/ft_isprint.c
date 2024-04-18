/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:42:26 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 22:55:49 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if character c is printable.
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int main()
{
	int c = 65;

	printf("%d", ft_isprint(c));
}*/
