/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:12:12 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/07 13:47:19 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(const char *str, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;

	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			ft_check_format(&format[++i], args);
			i++;
		}
		else
			ft_putchar(format[i++]);
	}
	va_end(args);
	return (0);
}

int	ft_check_format(const char *str, va_list args)
{
	int	i;

	i = 0;
	if (str[i] == 'c')
		ft_putchar(va_arg(args, int));
	if (str[i] == 's')
		ft_putstr(va_arg(args, char *));
	if (str[i] == 'p')
		ft_puthex(va_arg(args, int), str[i]);
	if (str[i] == 'd' || str[i] == 'i')
		ft_putnbr(va_arg(args, int));
	if (str[i] == 'u')
		ft_putunnbr(va_arg(args, unsigned int));
	if (str[i] == '%')
		ft_putchar('%');
	if (str[i] == 'X' || str[i] == 'x')
		ft_puthex(va_arg(args, int), str[i]);
	return (0);
}

int main()
{
	ft_printf("Test c:\n	UPPER: %c | lower: %c\n\n", 'H', 'h');
	ft_printf("Test s:\n	s1: %s | s2: %s\n\n", "Tremendo", "Gilipollas");
	ft_printf("Test d:\n	min: %d | neg:%d | zero: %d | pos: %d | max: %d \n\n", INT_MIN,-42,0,42,INT_MAX);
	ft_printf("Test i:\n	min: %i | neg:%i | zero: %i | pos: %i | max: %i \n\n", INT_MIN,-42,0,42,INT_MAX);
	ft_printf("Test u:\n	u1: %u | u2: %u | u3: %u\n\n", INT_MIN, INT_MAX, 4294967295);
	ft_printf("Test x:\n	x1: %x | x2: %x | x3: %x\n\n", 71336, 15, 8);
	ft_printf("Test X:\n	X1: %X | X2: %X | X3: %X\n\n", 71336, 15, 8);
	ft_printf("Test %%:\n	%: %% | %d%% | %d%% | %d%%\n\n", 0, 50, 100);
	write (1, "\n", 1);
	return (0);
}
