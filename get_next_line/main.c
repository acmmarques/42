#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

char *get_next_line(int fd);

int	main()
{
	int fd;

	// tenho de começar por abrir o ficheiro e ter o fd indicado
	fd = open("file.txt", O_RDONLY);


	/*
	// depois chamo a função get_next_line
	printf("line: %s\n", get_next_line(fd));
	printf("==================\n");
	printf("second line: %s\n", get_next_line(fd));
	*/
	get_next_line(fd);
}
