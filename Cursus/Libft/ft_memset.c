/*Establece un bloque de memoria con un valor específico.
 Retorna un puntero al bloque de memoria modificado.*/

char    *ft_memset(char *str, char c, int n)
{
    unsigned int    i;
    
    i = 0;
    while(str[i] != '\0' && i < n)
    {
        str[i] = c;
        i++;
    }
    return (str);
}