/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:45:09 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 14:26:38 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compares the first size characters of s1 and s2.

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	while (size--)
	{
		if (str1[i] != str2[i] || str1[i] == 0 || str2[i] == 0)
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
    const char str1[] = "test\200";
    const char str2[] = "test\0";
    size_t size = 6;
    printf("%d", strncmp(str1,str2,size));
    }*/
