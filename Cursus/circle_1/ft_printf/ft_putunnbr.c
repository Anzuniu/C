/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 17:51:37 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/07 20:12:11 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char_count(unsigned int n);

int	ft_putunnbr(unsigned int n)
{
	long	i;
	int		printed_chars;

	i = (long)n;
	printed_chars = 0;
	if (i >= 10)
	{
		printed_chars++;
		ft_putunnbr(i / 10);
		ft_putunnbr(i % 10);
	}
	else
	{
		ft_putchar(i + '0');
		printed_chars = ft_chars_count(n);
	}
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
