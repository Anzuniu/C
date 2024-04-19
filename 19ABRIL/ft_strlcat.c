/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:44:31 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/19 13:22:57 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
