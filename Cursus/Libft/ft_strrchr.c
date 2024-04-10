//Locates the last occurrence of c in str.

#include <stdio.h>

char *ft_strrchr(const char *str, int c)
{
    size_t    i;
    
    i = 0;
    while (str[i])
        i++;
    while (i != 0)
    {
        if(str[i] == c)
            return (&str[i]);
        i--;
    }
    return (0);
}

/*int main()
{
    const char str[] = "Diplodocus";
    int c;

    c = 'o';
    printf("%s", ft_strrchr(str,c));
}*/