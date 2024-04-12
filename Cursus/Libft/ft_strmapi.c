//Applies a function to each character of a string.

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlen(char *str);
char	ft_upper(unsigned int i, char c);

/*int main()
{
    char *s = "Hola Mundo";
    char *result = ft_strmapi(s, ft_upper);

    printf("Resultado: %s\n", result);
    free(result);
    return 0;
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str) //Verificación de memoria
		return (NULL);
	str[i] = 0;
	while (i--)
		str[i] = f(i, s[i]);
	return (str);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_upper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
