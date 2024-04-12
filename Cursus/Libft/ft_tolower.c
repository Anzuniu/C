//Converts character c to lowercase if it's uppercase.

#include <stdio.h>

char	*ft_tolower(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*int main()
{
    char    str[] = "DiPlOdOcUs";

    printf("%s\n",ft_tolower(str));
    return (0);
}*/
