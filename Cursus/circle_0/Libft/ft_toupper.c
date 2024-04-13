/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 02:25:49 by antonio           #+#    #+#             */
/*   Updated: 2024/04/13 02:26:13 by antonio          ###   ########.fr       */
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
