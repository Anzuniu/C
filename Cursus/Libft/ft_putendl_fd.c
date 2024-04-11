//Writes a string followed by a newline to a file descriptor.

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str);

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		write (fd, &s[i++], 1);
	write (fd, "\n", 1);
}

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int main()
{
    char c[] = "Como estan los maquinas";
    int fd = 1;

    ft_putendl_fd(c,fd);
}*/
