/*A cada carácter de la string ’s’, aplica la función
’f’ dando como parámetros el índice de cada
carácter dentro de ’s’ y la dirección del propio
carácter, que podrá modificarse si es necesario.
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_striteri(char *s, void (*f)(unsigned int, char*));
int     ft_strlen(char *str); 
void    ft_upper(unsigned int i, char *c);

int main()
{
    char s[] = "Hola Mundo";

    printf("Cadena original: %s\n", s);
    ft_striteri(s, ft_upper);
    printf("Cadena modificada: %s\n", s);

    return 0;
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;

    i = ft_strlen(s);
    while (i > 0)
    {
        f(i, &s[i]);
        i--;
    }
}

int    ft_strlen(char *str)
{
    unsigned int    i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

void ft_upper(unsigned int i, char *c) 
{
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}