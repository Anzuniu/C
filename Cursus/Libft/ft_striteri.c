//Applies a function to each character of a string, with its index.

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
//#include <libft.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	ft_strlen(char *str);
void	ft_upper(unsigned int i, char *c);

/*int main()
{
	char	s[] = "Como estan los maquinas";

	printf ("Cadena original: %s\n", s);
	ft_striteri(s, ft_upper);
	printf("Cadena modificada: %s\n", s);
	return 0;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		f (i, &s[i]);
		i--;
	}
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_upper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}
