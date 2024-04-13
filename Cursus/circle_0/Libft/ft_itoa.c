/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:42:36 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 23:52:50 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Converts an integer to a string.

#include "libft.h"

char	*ft_itoa(int n);
size_t	len_int(int n);

/*int	main(void)
{
	int	n;

	n = -2147483647;
    	printf("%s", ft_itoa(n));
}*/

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	int		sign;

	len = len_int(n);
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	result = (char *)malloc((len + 2) * sizeof(char));
	result[len + 1] = '\0';
	while (n / 10 != 0)
	{
		result[len--] = (n % 10) + '0';
		n = n / 10;
	}
	result[len] = n + '0';
	if (sign == 1)
		result[0] = '-';
	return (result);
}

size_t	len_int(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n / 10 != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}
