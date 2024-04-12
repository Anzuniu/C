/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:43:11 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 02:54:33 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Fills the first size bytes of str with the byte c.

#include "libft.h"

void	*ft_memset(void *str, char c, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
		((char *)str)[i++] = c;
	return (str);
}

/*int main()
{
    char buffer[120];
    size_t buffer_size = sizeof(buffer);

    ft_memset(buffer, 'E', buffer_size);
    buffer[buffer_size - 1] = '\0';
    printf("Buffer modificado: %s", buffer);
    return 0;
}*/
