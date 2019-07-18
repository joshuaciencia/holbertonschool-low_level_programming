#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - create array of ints
 * @min: min range
 * @max: max range
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;

	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
		p[i] = min + i;
	return (p);
}
