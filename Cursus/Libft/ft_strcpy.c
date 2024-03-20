/*Copia una cadena de caracteres a otra.
Retorna un puntero a la cadena de destino después de la copia.*/

#include <stdio.h>

void	*ft_strcpy(char	*dest, char	*src)
{
	size_t	i;	

	i = 0;
    while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = 0;
}

int main()
{
    char src[] = "Diplodocus";
    char dest[] = "Tremendo";

    printf("Viejo dest: %s\nRecurso a pegar: %s\n", dest, src);
    ft_strcpy(dest, src);
    printf("Nuevo dest: %s", dest);
}