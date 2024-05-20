/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);*/

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;	
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*
int main()
{
	char	s1[] = "Como estan";
	char	s2[] = " los mquinas";

	printf("s1: %s\ns2: %s\n", s1, s2);
	ft_strcpy(s1, s2);
	printf("New s2: %s\n", s2);

}*/
