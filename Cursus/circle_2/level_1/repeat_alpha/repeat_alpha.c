/*Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	num_r;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				num_r = argv[1][i] - 'A';
				while (num_r > 0)
				{
					write (1, &argv[1][i], 1);
					num_r--;
				}
			}
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				num_r = argv[1][i] - 'a';
                                while (num_r > 0)
                                {
                                        write (1, &argv[1][i], 1);
                                        num_r--;
                                }
			}
			i++;
		}
	}
	if (argc != 2)
		write (1, "\n", 1);
	return (0);
}
