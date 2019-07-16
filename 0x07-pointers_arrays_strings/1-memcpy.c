#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: dest sring
 * @src: src string
 * @n: n bytes to fill
 * Return: pointer to dest string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
