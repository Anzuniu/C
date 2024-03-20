/*Busca la primera aparición de un carácter en una cadena.
Retorna un puntero a la primera aparición del carácter en la cadena o NULL si no se encuentra.*/
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    size_t    i;
    
    i = 0;
    while (s[i])
    {
        if(s[i] == c)
            return (&s[i]);
        i++;
    }
    return (0);
}

int main()
{
    const char s[] = "Diplodocus";
    int c;

    c = 'p';
    printf("%s", ft_strchr(s,c));

}