/*Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);*/

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	unsigned int	i;
	unsigned int	j;
	int		num;

	i = 0;
	j = 0;
	num = 0;
	while (s[i])
	{
		while (s[i] == reject[j] && reject[i])
		{
			i++;
			j++;
		}
		if (reject[j] == '\0')
                                return (num++);
		num += j;
		j = 0;
		num++;
		i++;
	}
	write (1, "\n", 1);
	return (num);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	printf("Bytes: %ld", ft_strcspn(argv[1], argv[2]));
	return (0);
}
