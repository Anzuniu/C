/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:51:38 by antalvar          #+#    #+#             */
/*   Updated: 2024/07/10 11:04:57 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdint.h>
# include <limits.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putdeci(int n);
int		ft_putstr(char *s);
int		ft_putunnbr(unsigned int i);
int		ft_printhex(unsigned long n, char *base, int i);
int		ft_puthex(unsigned long n, char c);
int		ft_printf(const char *format, ...);
int		ft_check_format(const char *str, va_list args);
int		ft_putunnbr(unsigned int n);
int		ft_chars_count(unsigned int n);

#endif
