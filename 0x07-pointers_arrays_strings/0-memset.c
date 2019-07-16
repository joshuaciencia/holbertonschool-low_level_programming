#include "holberton.h"
/**
 * _memset - fills memory with constants byte
 * @s: string
 * @b: constant byte
 * @n: n bytes to fill
 * Return: pointer to string filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
