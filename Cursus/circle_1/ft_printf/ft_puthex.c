/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 01:25:33 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/08 15:48:56 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char c)
{
	char	*hex_up;
	char	*hex_low;
	int		printed_chars;

	printed_chars = 0;
	hex_up = "0123456789ABCDEF";
	hex_low = "0123456789abcdef";
	if (c == 'p' && n == 0)
	{
		write (1, "(nil)", 5);
		printed_chars = 5;
	}
	if (c == 'x')
		printed_chars += ft_printhex((unsigned int)n, hex_low, printed_chars);
	else if (c == 'X')
		printed_chars += ft_printhex((unsigned int)n, hex_up, printed_chars);
	else if (c == 'p' && n != 0)
	{
		write (1, "0x", 2);
		printed_chars = ft_printhex(n, hex_low, printed_chars);
		printed_chars += 2;
	}	
	return (printed_chars);
}

int	ft_printhex(unsigned long n, char *base, int printed_chars)
{
	if (n > 15)
	{
		printed_chars = ft_printhex(n / 16, base, printed_chars);
		write (1, &(base[n % 16]), 1);
		printed_chars++;
	}
	else
	{
		write (1, &(base[n]), 1);
		printed_chars++;
	}
	return (printed_chars);
}
