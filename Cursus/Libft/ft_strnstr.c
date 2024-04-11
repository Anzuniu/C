//Locates the first occurrence of needle in haystack within a maximum of size bytes.

#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (needle[i])
		i++;
	if (size < i)
		return (NULL);
	i = 0;
	j = 0;
	while (haystack[i] && i < size)
	{
		while ((haystack[i] == needle[j]) && haystack[i] && needle[j] && i < size)
		{
			i++;
			j++;
		}
		if (needle[j] == 0)
			return ((char *)&haystack[i - j]);
		j = 0;
		i++;
	}
	return (NULL);
}

/*int main()
{
    const char  haystack[] = "Como estan los maquinas, lo primero de todo.";
    const char  needle[] = "ri";
    size_t size = 45;

    printf("%s", ft_strnstr(haystack,needle,size));
}*/
