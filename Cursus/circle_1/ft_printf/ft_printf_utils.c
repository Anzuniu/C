/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:16:16 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/07 13:49:51 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n == INT_MIN)
		write (1, "-2147483648", 11);
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
	return ;
}

void	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		write (1, &s[i++], 1);
	return ;
}

void	ft_putunnbr(unsigned int n)
{
	long	i;

	i = (long)n;
	if (i >= 10)
	{
		ft_putunnbr(i / 10);
		ft_putunnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
	return ;
}

void	ft_puthex(int n, char c)
{
	char	*hex_up;
	char	*hex_low;
	char	tmp;

	tmp = c;
	hex_up = "0123456789ABCDEF";
	hex_low = "0123456789abcdef";
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 16)
	{
		ft_puthex((n / 16), tmp);
		ft_puthex((n % 16), tmp);
	}
	else
	{
		if (tmp == 'x')
			ft_putchar(hex_low[n]);
		if (tmp == 'X' || tmp == 'p')
			ft_putchar(hex_up[n]);
	}
	return ;
}
