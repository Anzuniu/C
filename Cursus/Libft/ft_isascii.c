/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:42:11 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 02:57:02 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if character c is an ASCII character.

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
