#include <stdio.h>
#include <string.h>

char    *ft_bzero(char *str, int n)
{
    unsigned int    i;

    i = 0;
    while (str[i] && i < n)
    {
        str[i] = '0';//No se si es este 0 o \0
        i++;
    }
    return (str);
}

int main()
{
    char    str[] = "Testeando esto.";
    int     n = 5;
    printf("%s", ft_bzero(str, n));
}