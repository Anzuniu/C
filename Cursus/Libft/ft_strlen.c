//Computes the length of the string str.

#include <stdio.h>

size_t    ft_strlen(const char *str)
{
    unsigned int    i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

/*int main()
{
    char str[] = "Diplodocus";
    printf("%d", ft_strlen(str));
}*/