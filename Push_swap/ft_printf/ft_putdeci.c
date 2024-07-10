/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdeci.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:16:16 by antalvar          #+#    #+#             */
/*   Updated: 2024/07/10 12:13:09 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdeci(int n)
{
	int	printed_n;

	printed_n = 0;
	if (n == INT_MIN)
	{
		write (1, "-2147483648", 11);
		printed_n = printed_n + 11;
	}
	else if (n < 0)
	{
		printed_n += ft_putchar('-');
		printed_n += ft_putdeci(-n);
	}
	else if (n >= 10)
	{
		printed_n += ft_putdeci(n / 10);
		printed_n += ft_putchar(n % 10 + '0');
	}
	else
	{
		printed_n += ft_putchar(n + '0');
	}
	return (printed_n);
}
