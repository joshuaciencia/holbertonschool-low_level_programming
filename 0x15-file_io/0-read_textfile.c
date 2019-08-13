#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * read_textfile - reads and prints from a file
 * @filename: path to file
 * @letters: chars to read
 * Return: chars read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[1000];
	ssize_t bytes;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = read(fd, buff, letters);
	if (bytes == -1)
		return (0);

	write(1, buff, bytes);

	return (bytes);
}
