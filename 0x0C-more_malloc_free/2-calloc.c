#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: num of elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		p[i] = '0';
	return (p);
}
