/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:42:19 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 22:52:49 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if character c is a numeric digit.
#include "libft.h"

int	ft_isdigit(int n)
{
	return (n >= '0' && n <= '9');
}

/*int main()
{
	int n = '4';

	printf("%d", ft_isdigit(n));
}*/
