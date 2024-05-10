/*Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>*/

#include <unistd.h>

int	is_alpha(char c);

int	main(int argc, char **argv)
{
	unsigned int	i;
	int		changed;

	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (!(is_alpha(argv[1][i])))
			write (1, &argv[1][i], 1);
		else if (argv[1][i] == 'z')
			write (1, "a", 1);
		else if (argv[1][i] == 'Z')
			write (1, "A", 1);
		else
		{
			changed = argv[1][i] + 1;
			write (1, &changed, 1);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

int	is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
