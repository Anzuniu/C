/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:16:50 by antonio           #+#    #+#             */
/*   Updated: 2024/05/22 15:16:52 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;

	if (argc != 4)
		return (0);
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_RDONLY);
	fd3 = open(argv[3], O_RDONLY);
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
}
