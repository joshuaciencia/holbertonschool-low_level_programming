#include "holberton.h"
/**
 * _strcpy - prints string
 * Return: length of string
 * @dest: destiny string
 * @src: source string
 */
char *_strcpy(char *dest, char *src)
{
	int s = 0;

	int i;

	while (src[s] != 0)
	{
		s++;
	}

	dest[s] = '\0';
	for (i = 0; i < s; i++)
		dest[i] = src[i];

	return (dest);
}
