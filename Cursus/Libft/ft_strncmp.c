/*Compara los primeros n caracteres de dos cadenas.
Retorna un valor menor que, igual a, o mayor que cero según la comparación de las cadenas.*/

#include <stdio.h>

int strncmp(const char *str1, const char *str2, int n)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0 ;
    while(str1[i])
        i++;
    while(str2[j])
        j++;
    if (i < j)
    {
        printf("str2 es más larga.");
        return -1;
    }
    if (i > j)
    {
        printf("str1 es más larga.");
        return 1;
    }
    i = 0;
    j = 0;
    while(str1[i] && i < n)
    {
        while(str1[i] == str2[j])
        {
            i++;
            j++;
            if(str1[i] == '\0')
            {
                printf("Son iguales hasta n.");
                return 0;   
            }

        }
        return (str1[i] - str2[j]);
    }
}

int main()
{
    const char str1[] = "HolaR";
    const char str2[] = "Holar";
    int n = 9;
    printf("%d", strncmp(str1,str2,n));
}