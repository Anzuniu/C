/*Busca la primera aparición de una subcadena en otra.
 Retorna un puntero a la primera aparición de la subcadena en la cadena o NULL si no se encuentra.*/
#include <stdio.h>

const char *ft_strstr(const char *haystack, const char *needle)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;

     printf("s1: %s\nset: %s\n\n", haystack, needle);

    while (haystack[i])
    {
        while(haystack[i] == needle[j])
        {
            i++;
            j++;
        }
        if(needle[j] == 0)
            return(&haystack[i - j]);
        j = 0;
        i++;
    }
    return(haystack);
    
}

int main()
{
    const char  haystack[] = "Al diplodocus le cayó un meteorito.";
    const char  needle[] = "le";

    printf("%s", ft_strstr(haystack,needle));
}