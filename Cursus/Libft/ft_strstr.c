/*Busca la primera aparición de una subcadena en otra.
 Retorna un puntero a la primera aparición de la subcadena en la cadena o NULL si no se encuentra.*/
#include <stdio.h>

const char *ft_strstr(const char *haystack, const char *needle)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (haystack[i])
    {
        while(haystack[i] == needle[j])
        {
            i++;
            j++;
        
        }
        if(needle[j])
            return(&haystack[i - j]);
        j = 0;
        i++;
    }
    return(haystack);
    
}

int main()
{
    const char  haystack[] = "Al diplodocus le cayó un meteorito.";
    const char  needle[] = "diplo";

    printf("%s", ft_strstr(haystack,needle));
}