/*Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);*/

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int		result;

	result = 0;
	i = 0;
	while(s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s1[i] == '\0')
		return (0);
	result = s2[i] - s1[i];
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	printf("%d", ft_strcmp(argv[1], argv[2]));
	return (0);
}

