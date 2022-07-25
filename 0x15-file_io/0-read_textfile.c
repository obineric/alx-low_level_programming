#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[letters];

	fd = open("(*filename)", O_RDONLY);

	if (fd == -1)
		return (0);
	read((*filename), buff, letters);
	buff[letters - 1] = '\0';

	close(fd);

	while (*(buff))
	{
		_putchar(*buff);
		buff++;
	}
