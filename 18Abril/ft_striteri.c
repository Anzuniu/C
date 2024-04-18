/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:44:17 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/15 01:06:24 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Applies a function to each character of a string, with its index.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_upper(unsigned int i, char *c);

/*int main()
{
	char	s[] = "Como estan los maquinas";

	printf ("Cadena original: %s\n", s);
	ft_striteri(s, ft_upper);
	printf("Cadena modificada: %s\n", s);
	return 0;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f (i, &s[i]);
		i++;
	}
}

void	ft_upper(unsigned int i, char *c)
{
	i = 0;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
	i++;
}
