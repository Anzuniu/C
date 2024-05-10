/*Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);*/

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int		sign_i;
	int		neg_i;
	int		result;

	i = 0;
	while(str[i] == ' ' || str[i] == '	' || str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+' || str[i] == '-')
			sign_i++;
		if (str[i] == '-')
			neg_i++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result  *= 10;
		result += str[i] - '0';
		i++;
	}
	if (sign_i > 1)
		return (0);
	if (neg_i == 1)
		return (-result);
	return (result);
}


int main(int argc, char **argv)
{	
	if (argc != 2)
		return (0);

	printf("%d", ft_atoi(argv[1]));
	printf("\n");
	return (0);
}
