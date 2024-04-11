//Converts an integer to a string.

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

/*int main()
{
    int n;

    n = -2147483647;
    printf("%s", ft_itoa(n));
}*/

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;
	int	cpy_n;
	int	sign;

	cpy_n = n;
	len = 0;
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
		sign = 1;
	}
	while (cpy_n / 10 != 0)
	{
		len++;
		cpy_n = cpy_n / 10;
	}
	result = (char *)malloc((len + 2) * sizeof(char));
	result[len + 1] = '\0';
	while (n / 10 != 0)
	{
		result[len] = (n % 10) + '0';
		len--;
		n = n / 10;
	}
	result[len] = n + '0';
	if (sign == 1)
		result[0] = '-';
	return (result);
}
