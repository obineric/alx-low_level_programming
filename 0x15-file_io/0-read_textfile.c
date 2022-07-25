#include "main.h"

/**
 * read_textfile - read a text file and prints it to the POSIX
 * standard output
 * @filename: file name
 * @letters: number of leters to be read and printed
 * Return: the number of letters that was read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t count_r, count_w;

	if (fd == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	count_r = read(fd, buff, letters);
	if (count_r == -1)
		return (0);

	count_w = write(STDOUT_FILENO, buff, count_r);
	if (count_w == -1 || count_r != count_w)
		return (0);

	free(buffer);

	close(fd);

	return (count_w);
