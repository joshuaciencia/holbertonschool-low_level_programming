#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - gives a pointer to memory space
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *s;

	unsigned int size = 0, i;

	if (str == NULL)
		return (NULL);

	while (*(str + size))
		size++;

	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(s + i) = *(str + i);

	*(s + size) = '\0';
	return (s);
}
