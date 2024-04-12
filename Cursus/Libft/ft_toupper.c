//Converts character c to uppercase if it's lowercase.

#include <stdio.h>

char	*ft_toupper(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*int main()
{
    char    str[] = "DiPlOdOcUs";

    printf("%s",ft_toupper(str));
    return (0);
}*/
