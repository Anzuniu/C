/*
La función memcpy en C se utiliza para copiar un bloque de memoria desde una ubicación de origen a una ubicación de destino. 
Su declaración típica es:

void *memcpy(void *dest, const void *src, size_t num);

La función memcpy copia los primeros num bytes de la memoria apuntada por src en la memoria apuntada por dest.*/
void *ft_memcpy(void *dest, const void *src, size_t size)
{
    char    *d;
    char    *s;

    d = (char *)dest;   //Copiamos dest en d para poder trabajar, ya que dest es void
    s = (char *)src;    //d y s son punteros que apuntan a la dirección de memoria de dest y src, por lo que si los modificamos, lo hacemos en dest y src también

    if(!dest && !src)
        return (NULL);
    while(size--)
        *d++ = *s++;
    return(dest);
}