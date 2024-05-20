#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{

	char	*line;
	int		i;
	int		fd;
	
	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	i = 1;
	while (i < 10)
	{
		line = get_next_line(fd);
		printf("line [%d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd);
	return (0);
}

//BONUS


/*int	main(void)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;
	
	fd1 = open("test1.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	fd3 = open("test3.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%d]: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line [%d]: %s", i, line);
		free(line);
		line = get_next_line(fd3);
		printf("line [%d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}*/
