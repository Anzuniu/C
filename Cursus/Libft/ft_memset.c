/*Establece un bloque de memoria con un valor específico.
 Retorna un puntero al bloque de memoria modificado.*/

char    *ft_memset(char *str, char c, size_t size)
{
    size_t    i;
    
    i = 0;
    while(str[i] && i < size)
    {
        str[i] = c;
        i++;
    }
    return (str);
}