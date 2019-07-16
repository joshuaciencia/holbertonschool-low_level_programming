#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates array of char
 * @size: size of the ar
 * @c: initialize ar with char
 * Return: void
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	unsigned int i;

	if (!size)
		return (NULL);

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
