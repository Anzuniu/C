/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:53:26 by antalvar          #+#    #+#             */
/*   Updated: 2024/02/07 22:00:06 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_mayus(char	*str, unsigned int i);

char	*ft_strcapitalize(char	*str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		ft_mayus(str, i);
		i++;
	}
	return (str);
}

char	*ft_mayus(char	*str, unsigned int i)
{
	if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		str[i] = str[i] - 32;
	if (i > 0 && str[i -1] >= 32 && str[i - 1] <= 47)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	if (i > 0 && str[i - 1] >= 58 && str[i - 1] <= 64)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] -32;
	if (i > 0 && (str[i] >= 91 && str[i] <= 96))
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	if (i > 0 && (str[i] >= 123 && str[i] <= 126))
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	return (str);
}

int	main()
{
	char	str[] = "salu; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}
