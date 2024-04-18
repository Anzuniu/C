/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:43:04 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 17:12:42 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copies size bytes from src to dest, even if they overlap.
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (NULL);
	if (d > s && d < s + size)
	{
		while (size--)
			d[size] = s[size];
	}
	else
	{
		while (size--)
			*d++ = *s++;
	}
	return (dest);
}
