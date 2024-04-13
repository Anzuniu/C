/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:57:59 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 13:20:28 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates memory and fills it with zeros.

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;
	size_t	i;

	if (n == 0 || size == 0 || SIZE_MAX / n < size)
		return (NULL);
	p = malloc(n * size);
	if (!p)
		return (NULL);
	i = 0;
	while (i < n * size)
	{
		*((char *)p + i) = 0;
		i++;
	}
	return (p);
}
