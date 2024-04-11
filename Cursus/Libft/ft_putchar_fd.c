//Writes a character to a file descriptor.

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*int main()
{
    char c = 'J';
    int fd = 1;

    ft_putchar_fd(c,fd);
}*/
