/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:44:31 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 12:54:00 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Appends src to dest until reaching size.

#include "libft.h"

size_t	ft_strlcat(char	*sr1, const char *sr2, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sr1_len;
	size_t	sr2_len;

	sr1_len = 0;
	sr2_len = 0;
	while (sr1[sr1_len] && sr1_len < size)
		sr1_len++;
	while (sr2[sr2_len])
		sr2_len++;
	if (sr1_len == size)
		return (sr1_len + sr2_len);
	i = sr1_len;
	j = 0;
	while (sr2[j] && i < size - 1)
	{
		sr1[i] = sr2[j];
		i++;
		j++;
	}
	sr1[i] = '\0';
	return (sr1_len + sr2_len);
}

/*int main()
{
    char sr1[] = "Como estan ";
    char sr2[] = "los maquinas.";
    int  size = 25;

    printf("sr1: %s\nsr2: %s\n", sr1, sr2);
    printf("\n%ld\n",ft_strlcat(sr1, sr2, size));
    printf("New Sr2: %s\n", sr1);
}*/
