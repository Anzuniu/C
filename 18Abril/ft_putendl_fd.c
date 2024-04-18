/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:43:27 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 00:25:47 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Writes a string followed by a newline to a file descriptor.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		write (fd, &s[i++], 1);
	write (fd, "\n", 1);
}

/*int main()
{
    char c[] = "Como estan los maquinas";
    int fd = 1;

    ft_putendl_fd(c,fd);
}*/
