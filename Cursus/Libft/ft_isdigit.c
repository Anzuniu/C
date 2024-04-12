/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:42:19 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 02:56:45 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks if character c is a numeric digit.
#include "libft.h"

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
