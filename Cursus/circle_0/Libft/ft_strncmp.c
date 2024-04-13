/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:45:09 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 02:50:22 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compares the first size characters of s1 and s2.

#include "libft.h"

int	strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	while (size--)
	{
		if (str1[i] != str2[i] || str1[i] == 0 || str2[i] == 0)
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
    const char str1[] = "Maquinas";
    const char str2[] = "MaquiNas";
    size_t size = 10;
    printf("%d", strncmp(str1,str2,size));
    }*/
