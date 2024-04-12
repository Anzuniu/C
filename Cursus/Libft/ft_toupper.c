/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:46:16 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 02:47:34 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts character c to uppercase if it's lowercase.

#include "libft.h"

char	*ft_toupper(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*int main()
{
    char    str[] = "DiPlOdOcUs";

    printf("%s",ft_toupper(str));
    return (0);
}*/
