/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:42:26 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 02:56:27 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if character c is printable.
#include "libft.h"

int	ft_isprint(char c)
{
	return (c >= 32 && c <= 126);
}
