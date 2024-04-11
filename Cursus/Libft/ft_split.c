//Splits a string into others strings.

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	free_s(char **s);

/*int main()
{
	char const	s[] = "Como estan los maquinas, lo primero de todo.";
	char	c = 'm';
	char	**split = ft_split(s,c);
    int i = 0;

    while(split[i] != NULL)
        printf("%s\n",split[i++]);
    free_s(split);
}*/

char	**ft_split(char const *s, char c)
{
	char	**split = NULL;
	char	**tmp;
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	len;
	size_t	num_strings;
	char	*substr;

	i = 0;
	start = 0;
	num_strings = 0;
	while (s[i])
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			len = (s[i] == c) ? i - start : i - start + 1; //Operador ternario. Si encontramos el caracter no incluimos el delimitador, por lo que la longitud es i- start. Si llegamos al final de la cadena sin encontrar delimitador incluimos el último carácter, porr lo que es i - start.
			substr = ft_substr(s, start, len);
			if (substr == NULL) // Liberamos la memoria si falla la asignación
			{
				free_s(split);
				return (NULL);
			}
			//Añadimos la subcadena al arreglo de cadenas
			tmp = (char **)malloc((num_strings + 2) * sizeof(char *));
			if (tmp == NULL) //Liberamos la memoria si falla la asignación
			{
				free(substr);
				free_s(split);
				return (NULL);
			}
			j = 0;
			while (j < num_strings)
			{
				tmp[j] = split[j];
				j++;
			}
			//Añadimos la nueva subcadena
			tmp[num_strings++] = substr;
			tmp[num_strings] = NULL;
			free(split);
			split = tmp;
			//Actualizamos el índice de inicio
			start = i + 1;
		}
		i++;
	}
	return (split);
}

void	free_s(char **s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != NULL)
		free(s[i++]);
	free(s);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)//Reserva espacio y devuelve una substring 's' que empieza desde start y mide 'len'
{
	size_t	i;
	size_t	j;
	char	*cpy;

	j = 0;
	if (s == NULL)
		return (NULL);
	while (s[j])
		j++;
	if (start >= j) //Si start es mayor que j significa que la substring está más allá del final de la cadena. Ya que si "s" que es medida por j mide 10, no puede empezar en 12.
	{
		cpy = malloc(1);
		if (cpy == NULL)
			return (NULL);
		cpy[0] = '\0';//Con esto creamos una cadena vacía
		return (cpy);
	}
	i = start;
	cpy = malloc(len + 1);
	if (cpy == NULL)
		return (NULL);
	while (i < (start + len) && i < j)
	{
		cpy[i - start] = s[i];
		i++;
	}
	cpy[i - start] = 0;
	return (cpy);
}
