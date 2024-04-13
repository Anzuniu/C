/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:44:25 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 02:51:45 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Concatenates two strings into a new one.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*cat;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	cat = malloc (i + j +1);
	if (!s1 || !s2 || !cat)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		cat[i] = s1[i];
		i++;
	}
	while (s2[j])
		cat[i++] = s2[j++];
	cat[i] = 0;
	return (cat);
}

/*int main()
{
    char const s1[] = "Como estan ";
    char const s2[] = "los maquinas.";

    printf("%s", ft_strjoin(s1, s2));
}*/
