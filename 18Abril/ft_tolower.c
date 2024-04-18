/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:46:10 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 01:30:00 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts character c to lowercase if it's uppercase.

#include "libft.h"

int	ft_tolower(int n)
{
	if (n >= 'A' && n <= 'Z')
		n += 32;
	return (n);
}

/*int main()
{
    char    str[] = "DiPlOdOcUs";

    printf("%s\n",ft_tolower(str));
    return (0);
}*/
