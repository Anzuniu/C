/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:51:38 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/07 03:57:10 by antonio          ###   ########.fr       */
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

int             ft_isalpha(int c);
int             ft_isdigit(int c);
void		ft_putchar(char c);
void		ft_putnbr(int n);
void    	ft_putstr(char *s);
void		ft_putunnbr(unsigned int i);
void		ft_puthexup(int n);
void		ft_puthexlow(int n);

#endif
