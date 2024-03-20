/*
La función memmove en C se utiliza para copiar un bloque de memoria desde una ubicación de origen 
a una ubicación de destino, incluso si hay solapamiento entre las áreas de origen y destino.

void *memmove(void *dest, const void *src, size_t num);
dest: Puntero a la ubicación de destino, donde se copiarán los datos.
src: Puntero a la ubicación de origen, desde donde se copiarán los datos.
num: Número de bytes a copiar.

La función memmove garantiza una copia segura incluso cuando las áreas de origen y destino se superponen.
Esto la distingue de la función memcpy, que puede dar resultados inesperados si hay solapamiento.*/

void *memmove(void *dest, const void *src, size_t size)
{
    char *d;
    char *s;


    d = (char *)dest;
    s = (char *)src;

    if(!dest && !src)
        return (NULL);
    while(size--)
        *d++ = *s++;
    return(dest);

}