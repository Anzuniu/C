/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:51:37 by antalvar          #+#    #+#             */
/*   Updated: 2024/07/10 12:13:35 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char_count(unsigned int n);

int	ft_putunnbr(unsigned int n)
{
	int		printed_chars;
	long	i;
	long	aux;

	printed_chars = 1;
	i = (long) n;
	if (i < 0)
		i = 4294967295 + i;
	aux = i;
	if (i >= 10)
	{
		ft_putunnbr((unsigned int)(i / 10));
		ft_putchar(i % 10 + '0');
	}
	else
		ft_putchar(i + '0');
	printed_chars = ft_chars_count(aux);
	return (printed_chars);
}

int	ft_chars_count(unsigned int n)
{
	size_t	i;

	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}
