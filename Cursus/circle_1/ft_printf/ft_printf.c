/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:12:12 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/08 02:21:42 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(const char *str, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		printed_chars;

	i = 0;
	printed_chars = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			printed_chars += ft_check_format(&format[++i], args);
			i++;
		}
		else
			printed_chars += ft_putchar(format[i++]);
	}
	va_end(args);
	return (printed_chars);
}

int	ft_check_format(const char *str, va_list args)
{
	int	i;
	int	printed_chars;

	i = 0;
	printed_chars = 0;
	if (str[i] == 'c')
		printed_chars += ft_putchar(va_arg(args, int));
	if (str[i] == 's')
		printed_chars += ft_putstr(va_arg(args, char *));
	if (str[i] == 'p')
		printed_chars += ft_puthex(va_arg(args, int), str[i]);
	if (str[i] == 'd' || str[i] == 'i')
		printed_chars += ft_putdeci(va_arg(args, int));
	if (str[i] == 'u')
		printed_chars += ft_putunnbr(va_arg(args, unsigned int));
	if (str[i] == '%')
		printed_chars += ft_putchar('%');
	if (str[i] == 'X' || str[i] == 'x')
		printed_chars += ft_puthex(va_arg(args, int), str[i]);
	return (printed_chars);
}
