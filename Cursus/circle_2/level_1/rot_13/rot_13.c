/*Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>*/

#include <unistd.h>

int	is_alpha(char c);

int	main(int argc, char **argv)
{
	unsigned int	i;
	int	changed;

	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == 'z')
			write (1, "m", 1);
       	        else if (argv[1][i] == 'Z')
			write (1, "M", 1);
		else if (is_alpha(argv[1][i]) && is_alpha((argv[1][i] + 13)))
		{
			changed = argv[1][i] + 13;
			write (1, &changed, 1);
		}
		else
		{
			if (argv[1][i] + 13 > 122)
			{
				changed = argv[1][i] - 13;
				write (1, &changed, 1);
			}
			else if (argv[1][i] + 13 > 90 && argv[1][i] + 13 < 97)
			{
				changed = argv[1][i] - 13;
				write (1, &changed, 1);
			}
			else	
				write (1, &argv[1][i], 1);
		}
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

int	is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c  >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
