/*La función memcmp en C se utiliza para comparar dos bloques de memoria. Su declaración típica es:

int memcmp(const void *ptr1, const void *ptr2, size_t num);
ptr1: Puntero al primer bloque de memoria a comparar.
ptr2: Puntero al segundo bloque de memoria a comparar.
num: Número de bytes a comparar.

La función compara los primeros num bytes de los bloques de memoria apuntados por ptr1 y ptr2. 
Retorna un valor entero que indica la relación entre los bloques de memoria:

Retorna un valor negativo si el bloque apuntado por ptr1 es menor que el bloque apuntado por ptr2.
Retorna 0 si ambos bloques son iguales.
Retorna un valor positivo si el bloque apuntado por ptr1 es mayor que el bloque apuntado por ptr2.
memcmp se utiliza comúnmente para realizar comparaciones de memoria, por ejemplo, en la ordenación 
de arreglos o en la búsqueda de elementos en estructuras de datos.*/
#include <stdio.h>

int ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
    char *str1;
    char *str2;
    size_t i;

    str1 = (char *)ptr1;
    str2 = (char *)ptr2;
    i = 0;

    while(size--)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
/*
int main()
{
    const void *ptr1;
    const void *ptr2;
    size_t size = 8;

    printf("%d", memcmp(ptr1,ptr2,size));
}*/