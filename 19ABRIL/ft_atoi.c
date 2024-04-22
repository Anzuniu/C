/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:41:10 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/21 23:45:20 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *nptr);
static int	jump_spaces(const char *str);
static int	check_sign(const char *str);

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	i = jump_spaces(nptr);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result = result + (nptr[i] - '0');
		i++;
	}
	if (check_sign(nptr) == -1)
		result *= -1;
	if (check_sign(nptr) == 0)
		return (0);
	return (result);
}

static int	jump_spaces(const char *str)
{
	size_t	i;

	i = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	return (i);
}

static int	check_sign(const char *str)
{
	size_t	i;
	size_t	neg;
	size_t	signs;

	signs = 0;
	i = 0;
	neg = 0;
	while ((str[i]) && (!(str[i] >= '0' && str[i] <= '9')))
	{
		if (str[i] == '+')
			signs += 1;
		if (str[i] == '-')
		{
			signs += 1;
			neg += 1;
		}
		i++;
	}
	if (signs > 1)
		return (0);
	if (neg == 1)
		return (-1);
	return (1);
}
