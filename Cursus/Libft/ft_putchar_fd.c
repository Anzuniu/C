/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:43:19 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 02:54:16 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Writes a character to a file descriptor.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*int main()
{
    char c = 'J';
    int fd = 1;

    ft_putchar_fd(c,fd);
}*/
