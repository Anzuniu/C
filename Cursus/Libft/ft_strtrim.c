/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antalvar <antalvar@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 02:45:44 by antalvar          #+#    #+#             */
/*   Updated: 2024/04/12 12:43:01 by antalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Removes specified characters from the beginning and end of a string.

#include "libft.h"

char	*ft_strchr(const char *s, int c);
int		ft_strlen(char *str);
void	ft_printcutre(char *cpy_s1);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy_s1;
	char	*cpy_set;
	int		start;
	int		found;
	size_t	i;
	size_t	j;

	found = 0;
	cpy_s1 = (char *)s1;
	cpy_set = (char *)set;
	if (!cpy_s1 || !cpy_set)
		return (NULL);
	i = 0;
	j = 0;
	while (cpy_s1[i])
	{
		while (cpy_s1[i] == cpy_set[j])
		{
			i++;
			j++;
		}
		if (cpy_set[j] == 0)
		{
			printf ("Encontrado desde la posición %d hasta la posición %d.\n",
				(i - j), i);
			found = 1;
			if (found == 1)
				break ;
		}
		j = 0;
		i++;
	}
	if (found == 0)
		return ("No lo ha encontrado.");
	start = i - (ft_strlen(cpy_set));
	printf ("\nS1 original: %s\n", cpy_s1);
	while (start < i && found == 1)
	{
		cpy_s1[start] = 0;
		start++;
	}
	ft_printcutre(cpy_s1);
	return (cpy_s1);
}

int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*void	ft_printcutre(char *cpy_s1)
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
}*/

/*int main()
{
    const char  s1[] = "Como estan los maquinas";
    const char  set[] = "omo estan los maqui";

    printf("\n\n%s", ft_strtrim(s1,set));
}*/
