/*Convierte un carácter a minúscula si es una letra.
Retorna el carácter convertido a minúscula si es una letra; de lo contrario, retorna el mismo carácter.*/
#include <stdio.h>

char    *ft_tolower(char *str)
{
    unsigned int    i;

    i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
    return (str);
}

int main()
{
    char    str[] = "DiPlOdOcUs";

    printf("%s",ft_tolower(str));
    return (0);
}