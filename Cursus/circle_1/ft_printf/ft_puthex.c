/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:16:49 by antonio           #+#    #+#             */
/*   Updated: 2024/05/07 15:30:05 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(int n, char c)
{
	char	tmp;
	int		i;

	tmp = c;
	i = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
		i++;
	}
	if (n >= 16)
	{
		ft_puthex((n / 16), tmp);
		ft_puthex((n % 16), tmp);
		i++;
	}
	else
		i += ft_puthex_format(n, tmp);
	return (i);
}

int	ft_puthex_format(int n, char c)
{
	char	*hex_up;
	char	*hex_low;
	int		i;

	i = 0;
	hex_up = "0123456789ABCDEF";
	hex_low = "0123456789abcdef";
	if (c == 'x' || c == 'p')
	{
		ft_putchar(hex_low[n]);
		i++;
	}
	if (c == 'X')
	{
		ft_putchar(hex_up[n]);
		i++;
	}
	return (i);
}
