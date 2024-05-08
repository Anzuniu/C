/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 01:25:33 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/08 04:20:54 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char c)
{
	char	aux;
	int		printed_chars;

	aux = c;
	printed_chars = 0;
	if (n >= 16)
	{
		printed_chars += ft_puthex(((unsigned int)n / 16), aux);
		printed_chars += ft_puthex(((unsigned int)n % 16), aux);
	}
	else
		printed_chars += ft_puthex_format(n, aux);
	return (printed_chars);
}

int	ft_puthex_format(unsigned long n, char c)
{
	char	*hex_up;
	char	*hex_low;
	int		printed_chars;

	printed_chars = 0;
	hex_up = "0123456789ABCDEF";
	hex_low = "0123456789abcdef";
	if (c == 'x' || c == 'p')
		printed_chars += ft_putchar(hex_low[n]);
	if (c == 'X')
		printed_chars += ft_putchar(hex_up[n]);
	return (printed_chars);
}
