/* convierte en nulo los primeros ("size") de caracteres de la cadena "str" */

#include <stdio.h>
#include <string.h>

void    *ft_bzero(char *str, size_t n)
{
    size_t    i;

    i = 0;
    while (str[i] && i < n)
    {
        str[i] = 0;
        i++;
    }
}
/*
int main()
{
    char    str[] = "Testeando esto.";
    int     n = 5;
    printf("%s", ft_bzero(str, n));
}*/