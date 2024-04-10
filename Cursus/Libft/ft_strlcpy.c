//Copies up to size characters from src to dest.

#include <stdio.h>

size_t	ft_strlcpy(char	*dest, const char	*src, size_t size)
{
	size_t	i;
	size_t	j;			

	j = 0;
	i = 0;
	while (src[j])
		j++;
	if (size)
	{
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (j);
}

/*int main()
{
	char dest[20];
	char src[] = "Como estan los maquinas, lo primero de todo";
	size_t size = sizeof(dest);

	printf("%zu", ft_strlcpy(dest,src,size));
}*/