/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:44:07 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/16 23:41:13 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Duplicates a dynamic string.*/
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*cpy;
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[len] = '\0';
	return (cpy);
}

/*int main()
{
	const char str[] = "Como estan los maquinas";
	char *cpy;

	cpy = ft_strdup(str);
	printf("%s", cpy);
}*/
