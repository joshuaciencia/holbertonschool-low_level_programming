#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - reads and prints from a file
 * @filename: path to file
 * @letters: chars to read
 * Return: chars read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	unsigned int count = 0;
	int ch;

	if (!filename)
		return (0);

	file = fopen(filename, "r");

	if (!file)
		return (0);

	while ((ch = fgetc(file)) != EOF)
	{
		if (count > letters)
			break;
		write(1, &ch, sizeof(char));
		count++;
	}

	fclose(file);
	return (count);
}
