/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:43:44 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/13 00:31:11 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Writes a string to a file descriptor.

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		write (fd, &s[i++], 1);
}

/*int main()
{
    char c[] = "Como estan los maquinas";
    int fd = 1;

    ft_putstr_fd(c,fd);
}*/
