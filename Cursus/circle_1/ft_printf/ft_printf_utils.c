/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:16:16 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/07 18:48:45 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putnbr(int n)
{
	int	printed_n;

	if (n == INT_MIN)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		printed_n = ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
		return (printed_n + 1);
	}
	else
	{
		ft_putchar(n + '0');
		return (1);
	}
}

int	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		write (1, &s[i++], 1);
	return (i);
}
