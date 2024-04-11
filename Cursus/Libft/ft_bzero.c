//Sets the first size bytes of str to zero.

#include <stdio.h>
#include <string.h>

void	*ft_bzero( void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*int main()
{
    char    str[] = "Como estan los maquinas, lo primero de todo";
    int     n = 5;

    ft_bzero(str, n);
    printf("%s", str);
}*/
