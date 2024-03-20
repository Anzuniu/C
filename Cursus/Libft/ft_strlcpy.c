/*Copia una cadena de caracteres a otra con límite de tamaño.
Retorna el número de caracteres que intentó copiar (sin contar el carácter nulo) en el búfer de destino.*/

#include <stdio.h>

unsigned int	ft_strlcpy(char	*dest, char	*src, size_t size)
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

int main()
{
	char dest[] = "";
	char src[] = "srcqesqwewqdaseasdase";
	size_t size = 2;

	printf("%d", ft_strlcpy(dest,src,size));
}