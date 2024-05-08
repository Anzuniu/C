/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 01:25:33 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/08 02:37:42 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(int n, char c)
{
	char	aux;
	int		i;

	aux = c;
	i = 0;
	if (n < 0)
	{
		i += ft_putchar('-');
		i += ft_puthex(-n, c);
	}
	if (n >= 16)
	{
		i += ft_puthex((n / 16), aux);
		i += ft_puthex((n % 16), aux);
	}
	else
		i += ft_puthex_format(n, aux);
	return (i);
}

int	ft_puthex_format(int n, char c)
{
	char	*hex_up;
	char	*hex_low;
	int		printed_chars;

	printed_chars = 0;
	hex_up = "0123456789ABCDEF";
	hex_low = "0123456789abcdef";
	if (c == 'x')
	{
		ft_putchar(hex_low[n]);
		printed_chars++;
	}
	if (c == 'X')
	{
		ft_putchar(hex_up[n]);
		printed_chars++;
	}
	return (printed_chars);
}
