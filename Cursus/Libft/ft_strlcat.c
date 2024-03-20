
#include <stdio.h>

int    ft_strlcat(char *sr1, char  *sr2, size_t size)
{
    size_t    i;
    size_t    j;
    int       len_total;

    i = 0;
    j = 0;
    while (sr1[i])
        i++;
    while (sr2[j])
        j++;
    len_total = i + j;
    j = 0;
    while (sr2[j] && i < size) 
    {
        sr1[i] = sr2[j];
        i++;
        j++;
    }
    sr1[i] = 0;
    if (len_total > size)
    {
        printf("No cabe");
        return -1;
    }
    else
    {
        printf("Cabe");
        return (i);
    }
        
}

int main()
{
    char sr1[] = "Tremendo ";
    char sr2[] = "diplodocus.";
    int  size = 20;

    printf("sr1: %s\nsr2: %s\n", sr1, sr2);
    printf("\n%d\n",ft_strlcat(sr1, sr2, size));
    printf("New Sr2: %s\n", sr1);
}