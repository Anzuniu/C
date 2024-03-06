/*Convierte un carácter a mayúscula si es una letra.
Retorna el carácter convertido a mayúscula si es una letra; de lo contrario, retorna el mismo carácter.*/
#include <stdio.h>

char    *ft_toupper(char *str)
{
    unsigned int    i;

    i = 0;
    while(str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return (str);
}

int main()
{
    char    str[] = "DiPlOdOcUs";

    printf("%s",ft_toupper(str));
    return (0);
}