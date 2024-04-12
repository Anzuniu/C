/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:43:44 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 02:53:14 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Writes a string to a file descriptor.

#include "libft.h"

int	ft_strlen(char *str);

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		write (fd, &s[i++], 1);
}

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int main()
{
    char c[] = "Como estan los maquinas";
    int fd = 1;

    ft_putstr_fd(c,fd);
}*/
