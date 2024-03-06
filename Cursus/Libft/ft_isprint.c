/* Indica si un carácter es imprimible (visible)
Retorna un valor distinto de cero si el carácter es imprimible; de lo contrario, retorna 0.*/
#include <stdio.h>

int ft_isprint(char c)
{
    if(c >= 32 && c <= 126)
        return(1);
    else
        return(0);
}

int main()
{
    char c;
    c = 43;

    if (ft_isprint(c)) 
        printf("%c es un carácter imprimible.\n", c);
    else 
        printf("%c no es un carácter imprimible.\n", c);
}