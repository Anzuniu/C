/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:42:44 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 19:42:25 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Locates the first occurrence of c in str within a maximum of size bytes.

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t			i;
	unsigned char	*pstr;

	i = 0;
	pstr = (unsigned char *)str;
	while (size--)
	{
		if (pstr[i] == (unsigned char)c)
			return (&pstr[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
    const char *str = "Como estan los maquinas";
    int c = 'l';
    size_t size = 18;

    // Llamada a la función ft_memchr
    void *result = ft_memchr(str, c, size);

    // Verificación del resultado
    if (result != NULL)
    {
        printf("Caracter encontrado: '%c' en %ld\n", c, (char *)result - str);
    }
    else
    {
        printf("Caracter no encontrado\n");
    }
    return 0;
}*/
