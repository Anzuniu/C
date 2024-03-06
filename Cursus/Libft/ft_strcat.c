/*Concatena dos cadenas de caracteres.
Retorna un puntero a la cadena resultante después de la concatenación.*/
#include <stdio.h>

void    ft_strcat(char *sr1, char  *sr2)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0;
    while (sr1[i])
        i++;
    while (sr2[j])
    {
        sr1[i] = sr2[j];
        j++;
        i++;
    }
    sr1[i] = '\0';
}

int main()
{
    char sr1[] = "Tremendo ";
    char sr2[] = "diplodocus.";

    printf("sr1: %s\nsr2: %s\n", sr1, sr2);
    ft_strcat(sr1, sr2);
    printf("New Sr2: %s\n", sr1);
}