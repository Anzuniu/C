//Locates the first occurrence of c in str within a maximum of size bytes.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t			i;
	char	*pstr;//Se declara un puntero a char llamado pstr, que se utilizará para manipular los bytes de la cadena str.

	i = 0;
	pstr = (char *)str;  // Se asigna a pstr la dirección de memoria de la cadena str
	while (size--)       // La condición size-- indica que se decrementará size en cada iteración y el bucle continuará mientras el resultado sea diferente de 0.
	{
		if (pstr[i] == c)
			return (&pstr[i]);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
    const char *str = "Hello, World!"; //Esto indica que el contenido no debe ser modificado
    int c = 'W';
    size_t size = 10;

    // Llamada a la función ft_memchr
    void *result = ft_memchr(str, c, size); // Un puntero de tipo void * puede apuntar a cualquier tipo de datos.

    // Verificación del resultado
    if (result != NULL)
    {
        printf("Caracter encontrado: '%c' en la posición %ld\n", c, (char *)result - str);
    }
    else
    {
        printf("Caracter no encontrado\n");
    }
    return 0;
}*/