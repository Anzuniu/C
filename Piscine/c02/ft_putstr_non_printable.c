/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:39:04 by antalvar          #+#    #+#             */
/*   Updated: 2024/02/08 15:39:19 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	dec_to_hex(int decimaal);

void	ft_putstr_non_printable(char	*str)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
			i++;
		}
		else
		{
			write(1, "\\", 2);
			c = str[i];
			dec_to_hex(c);
			i++;
		}
	}
}

void	dec_to_hex(int decimal)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write(1, &hexa[decimal / 16], 1);
	write(1, &hexa[decimal % 16], 1);
}

int	main()
{
	char	str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
}
