//Removes specified characters from the beginning and end of a string.

#include <stdio.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c);
int	ft_strlen(char *str);
void	ft_printcutre(char *cpy_s1);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy_s1;
	char	*cpy_set;
	int	start;
	int	found = 0;
	size_t	i;
	size_t	j;
	
	cpy_s1 = (char *)s1;
	cpy_set = (char *)set;
	if (!cpy_s1 || !cpy_set)
		return (NULL);
	printf ("s1: %s\nset: %s\n\n", cpy_s1, cpy_set); //Esto simplemente es para ver qué tenemos
	i = 0;
	j = 0;
	while (cpy_s1[i]) //Mientras tengamos s1 comenzamos la búsqueda
	{
		while (cpy_s1[i] == cpy_set[j]) //Si coinciden vamos avanzando
		{
			i++;
			j++;
		}
		if (cpy_set[j] == 0) //Si al avanzar hemos llegado al final del set lo hemos encontrado
		{
			printf ("Lo ha encontrado desde la posición %d hasta la posición %d.\n", (i - j), i);
			found = 1; //Damos el valor 1 a la variable found para usarla más adelante
			if (found == 1) //Si lo hemos encontrado ya podemos salir del bucle
				break ;
		}
		j = 0; //Si no ha coincidido toda la búsqueda, volvemos a iniciar set y seguimos buscando
		i++;
	}
	if (found == 0)
		return ("No lo ha encontrado.");
	start = i - (ft_strlen(cpy_set)); //Una vez encontrado, el inicio comienza donde haya quedado i menos eñ tamaño de set
	printf ("\nS1 original: %s\n", cpy_s1);
	while (start < i && found == 1) //Vamos cambiando desde start hasta llegar a i, que es donde  ha terminado set
	{
		cpy_s1[start] = 0;
		start++;
	}
	//printf("\nNueva s1 con valor nulo: %c\n", cpy_s1[15]);
	ft_printcutre(cpy_s1);
	return (cpy_s1); //Devolvemos el string ya modificado, ya que el que nos dieron es const
}

int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_printcutre(char *cpy_s1)
{
	printf ("%c", cpy_s1[0]);
	printf ("%c", cpy_s1[1]);
	printf ("%c", cpy_s1[2]);
	printf ("%c", cpy_s1[3]);
	printf ("%c", cpy_s1[4]);
	printf ("%c", cpy_s1[5]);
	printf ("%c", cpy_s1[6]);
	printf ("%c", cpy_s1[7]);
	printf ("%c", cpy_s1[8]);
	printf ("%c", cpy_s1[9]);
	printf ("%c", cpy_s1[10]);
	printf ("%c", cpy_s1[11]);
	printf ("%c", cpy_s1[12]);
	printf ("%c", cpy_s1[13]);
	printf ("%c", cpy_s1[14]);
	printf ("%c", cpy_s1[15]);
	printf ("%c", cpy_s1[16]);
	printf ("%c", cpy_s1[17]);
	printf ("%c", cpy_s1[18]);
	printf ("%c", cpy_s1[19]);
	printf ("%c", cpy_s1[20]);
	printf ("%c", cpy_s1[21]);
	printf ("%c", cpy_s1[22]);
}

/*int main()
{
    const char  s1[] = "Como estan los maquinas";
    const char  set[] = "omo estan los maqui";

    printf("\n\n%s", ft_strtrim(s1,set));
}*/
