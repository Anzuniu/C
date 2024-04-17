/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:44:38 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/17 17:33:14 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies up to size characters from src to dest.

#include "libft.h"

size_t	ft_strlcpy(char	*dest, const char	*src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(src[j])
		j++;
	if (size)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (j);
}

/*int main()
{
	char dest[43];
	char src[] = "Como estan los maquinas, lo primero de todo";
	size_t size = sizeof(dest);

	printf("Devolución de ft_strlcpy : %zu\n", ft_strlcpy(dest,src,size));
	printf("Nuevo dest : %s\n", dest);
}*/
