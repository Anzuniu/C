//Copies size bytes from src to dest.

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