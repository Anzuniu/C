#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (s1[i])
    {
        while(s1[i] == set[j])
        {
            i++;
            j++;
        
        }
        if(set[j])
            return(&s1[i - j]);
        j = 0;
        i++;
    }
    return(s1);
}


int main()
{
    const char  s1[] = "Al diplodocus le cayó un meteorito.";
    const char  set[] = "diplo";

    printf("%s", ft_strtrim(s1,set));
}