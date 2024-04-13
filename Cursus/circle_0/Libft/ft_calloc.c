/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:57:59 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 03:02:52 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates memory and fills it with zeros.

#include "libft.h"

void	*calloc(size_t n, size_t size)
{
	void	*p;
	size_t	i;

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
