//Compares the first size bytes of s1 and s2.

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

/*int main()
{
    const void *ptr1;
    const void *ptr2;
    size_t size = 8;

    printf("%d", memcmp(ptr1,ptr2,size));
}*/