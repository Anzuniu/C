/*Converts a string to an integer.*/

#include <stdio.h>

int	ft_atoi(const char *str);
int	jump_spaces(const char *str);
int	check_sign(const char *str);

/*int main()
{
    const char str[] = "-12312--+-+3-65415asd123";

    printf("%d", ft_atoi(str));
    return (0);
}*/

int	ft_atoi(const char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	i = jump_spaces(str);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result = result + (str[i] - '0');
		i++;
	}
	if (check_sign(str) == -1)
		result *= -1;
	if (check_sign(str) == 0)
		return (0);
	return (result);
}

int	jump_spaces(const char *str)
{
	size_t	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13
			|| str[i] == ' ') || (str[i] == '+'
			|| str[i] == '-'))
		i++;
	return (i);
}

int	check_sign(const char *str)
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
