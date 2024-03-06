/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:23:19 by antalvar          #+#    #+#             */
/*   Updated: 2024/02/07 19:18:28 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;			

	j = 0;
	i = 0;
	while (src[j] != 0)
		j++;
	if (size != 0)
	{
		while (src[i] != 0 && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main()
{
	char src[] = "abcd";
	char dest[] = "efgh";
	int	size = 8;

	ft_putstr(src);
	printf("\n\n");
	ft_putstr(dest);
	printf("\n\n");
	ft_strlcpy(dest, src, size);
	ft_putstr(dest);
	printf("\n\n");
	printf("%d", ft_strlcpy(dest, src, size));
}
