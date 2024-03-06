/* Busca una subcadena en otra, limitando la búsqueda a n caracteres.
Retorna un puntero a la primera aparición de la subcadena en la cadena o NULL si no se encuentra.*/
#include <stdio.h>

const char *ft_strnstr(const char *haystack, const char *needle, int len)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while(needle[i])
        i++;
    if ( len < i)
        return NULL;
    i = 0;
    j = 0;
    while (haystack[i] && i < len)
    {
        while((haystack[i] == needle[j]) && i < len)
        {
            i++;
            j++;
        }
        if(needle[j] == '\0')
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
    int len = 8;

    printf("%s", ft_strnstr(haystack,needle,len));
}