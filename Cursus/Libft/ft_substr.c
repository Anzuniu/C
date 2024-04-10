//Extracts a substring from a string.

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    size_t j;
    char *cpy;

    j = 0;
    if (s == NULL)
        return NULL;
    while (s[j])
        j++;
    if (start >= j)     //Si start es mayor que j significa que la substring está más allá del final de la cadena. Ya que si "s" que es medida por j mide 10, no puede empezar en 12.
    {
        cpy = malloc(1);
        if (cpy == NULL)
            return NULL;
        cpy[0] = '\0';  //Con esto creamos una cadena vacía
        return cpy;
    }
    i = start;
    cpy = malloc(len + 1);
    if (cpy == NULL)
        return NULL;
    while (i < (start + len) && i < j)
    {
        cpy[i - start] = s[i];
        i++;
    }
    cpy[i - start] = 0;
    return cpy;
}

/*int main()
{
    char const s[] = "Como estan los maquinas";
    unsigned int start = 0;
    size_t len = 16;

    printf("%s", ft_substr(s,start,len));
}*/