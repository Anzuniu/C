//Fills the first size bytes of str with the byte c.

#include <stdio.h>
#include <stdlib.h>

void    *ft_memset(void *str, char c, size_t size)
{
    size_t    i;
    
    i = 0;
    while(i < size)
        ((char *)str)[i++] = c;
    return (str);
}

/*int main()
{
    char buffer[120];
    size_t buffer_size = sizeof(buffer);

    ft_memset(buffer, 'E', buffer_size);
    buffer[buffer_size - 1] = '\0';
    printf("Buffer modificado: %s", buffer);
    return 0;
}*/