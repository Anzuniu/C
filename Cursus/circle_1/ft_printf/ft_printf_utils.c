/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 01:16:16 by antalvar          #+#    #+#             */
/*   Updated: 2024/05/07 04:15:21 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libftprintf.h"

void    ft_putchar(char c)
{
        write (1, &c, 1);
}

void    ft_putnbr(int n)
{
        if (n == INT_MIN)
        {
                write (1, "-2147483648", 11);
                return ;
        }
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
}

void    ft_putstr(char *s)
{
        size_t  i;

        i = 0;
        if (!s)
                return ;
        while (s[i])
                write (1, &s[i++], 1);
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
}

void	ft_puthexup(int n)
{
	char *HEX; 
		
	HEX = "0123456789ABCDEF";
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 16)
	{
		ft_puthexup(n / 16);
		ft_puthexup(n % 16);
	}
	else
	{
		ft_putchar(HEX[n]);
	}
}

void    ft_puthexlow(int n)
{
        char *hex;

        hex = "0123456789abcdef";
        if (n < 0)
        {
                ft_putchar('-');
                n *= -1;
        }
        if (n >= 16)
        {
                ft_puthexlow(n / 16);
                ft_puthexlow(n % 16);
        }
        else
        {
                ft_putchar(hex[n]);
        }
}
