/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:44:07 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 02:52:15 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Duplicates a dynamic string.*/
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	size_t	i;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	cpy = malloc (i + 1);
	i = 0;
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	return (cpy);
}
