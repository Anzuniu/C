/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:41:55 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 19:31:17 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if character c is alphanumeric.

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}

/*int main()
{
	int c = '\n';

	printf("%d", ft_isalnum(c));
}*/
