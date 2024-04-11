//Locates the first occurrence of c in str.

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
    const char s[] = "Diplodocus";
    int c;

    c = 'l';
    printf("%d", ft_strchr(s,c));
}*/
