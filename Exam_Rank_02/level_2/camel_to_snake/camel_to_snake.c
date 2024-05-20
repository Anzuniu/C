/*Assignment name  : camel_to_snake
Expected files   : camel_to_snake.c
Allowed functions: malloc, realloc, write
--------------------------------------------------------------------------------

Write a program that takes a single string in lowerCamelCase format
and converts it into a string in snake_case format.

A lowerCamelCase string is a string where each word begins with a capital letter
except for the first one.

A snake_case string is a string where each word is in lower case, separated by
an underscore "_".

Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	unsigned int	i;
	unsigned int	j;
	char		*new_str;
	int		count;

	count = 0;
	i = 0;
	j = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 65 && argv[1][i] <= 90)
			count++;
		i++;
	}
	count = count + i;
	new_str = (char *)malloc(count + 1);
	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}

	while (argv[1][i])
	{
		if (argv[1][i] >= 65 && argv[1][i] <= 90)
		{
			new_str[j] = '_';
			j++;
			new_str[j] = (argv[1][i] + 32);
			j++;
		}
		else
		{
			new_str[j] = argv[1][i];
			j++;
		}
		i++;
	}

	new_str[j] = '\0';
	j = 0;
	while (new_str[j])
	{
		write (1, &new_str[j], 1);
		j++;
	}

	write (1, "\n", 1);
	return (0);
}
