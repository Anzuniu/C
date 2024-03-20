/*La función calloc en muchos lenguajes de programación, incluyendo C y C++, se utiliza para asignar un bloque 
de memoria contigua y establecer todos sus bytes a cero. Toma dos argumentos: el número de elementos que se deben 
asignar y el tamaño en bytes de cada elemento. Diferente de la función malloc, que simplemente asigna la memoria 
sin inicializarla, calloc garantiza que la memoria asignada esté inicializada a cero. Esto es útil, por ejemplo, 
cuando se trabaja con arreglos o estructuras de datos y se desea que todos los elementos comiencen con un valor predeterminado.*/

void *calloc(size_t n, size_t size)
{
    void    *p;
    size_t  i;

    p = malloc(n * size);
    if (!p)
        return (NULL);
    i = 0;
    while (i < n * size)
    {
        *((char *)p + i) = 0;
        i++;
    }
    return (p);
}

//Es lo mismo que esto

void *calloc(size_t n, size_t size)
{
    char    *p;
    size_t  i;

    p = malloc(n * size);
    if (!p)
        return (NULL);
    i = 0;
    while (i < n * size)
    {
        *(p + i) = 0;
        i++;
    }
    return (p);
}
