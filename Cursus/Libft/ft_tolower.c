/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:46:10 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 02:47:20 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts character c to lowercase if it's uppercase.

#include "libft.h"

char	*ft_tolower(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*int main()
{
    char    str[] = "DiPlOdOcUs";

    printf("%s\n",ft_tolower(str));
    return (0);
}*/
