/*Devuelve la longitud (número de caracteres) de una cadena.
 Retorna el número de caracteres en la cadena.*/

#include <stdio.h>

int    ft_strlen(char *str)
{
    unsigned int    i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}
/*
int main()
{
    char str[] = "Diplodocus";
    printf("%d", ft_strlen(str));
}*/