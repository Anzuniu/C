/* Busca una subcadena en otra, limitando la búsqueda a n caracteres.
Retorna un puntero a la primera aparición de la subcadena en la cadena o NULL si no se encuentra.*/
#include <stdio.h>

const char *ft_strnstr(const char *haystack, const char *needle, size_t size)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while(needle[i])
        i++;
    if (size < i)
        return NULL;
    i = 0;
    j = 0;
    while (haystack[i] && i < size)
    {
        while((haystack[i] == needle[j]) && i < size)
        {
            i++;
            j++;
        }
        if(needle[j])
            return &haystack[i - j];
        j = 0;
        i++;
    }
    return NULL;
}

int main()
{
    const char  haystack[] = "Al diplodocus le cayó un meteorito.";
    const char  needle[] = "di";
    size_t size = 8;

    printf("%s", ft_strnstr(haystack,needle,size));
}