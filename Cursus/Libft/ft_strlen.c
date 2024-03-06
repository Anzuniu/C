/*Devuelve la longitud (número de caracteres) de una cadena.
 Retorna el número de caracteres en la cadena.*/

int    ft_strlen(char *str)
{
    unsigned int    i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}