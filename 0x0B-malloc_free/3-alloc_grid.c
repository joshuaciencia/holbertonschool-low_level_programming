#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - create 2d array
 * @width: width of the ar
 * @height: height of the ar
 * Return: pointer to 2d ar
 */
int **alloc_grid(int width, int height)
{
	int **p;

	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	*p = malloc(sizeof(int) * width * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < width + height; i++)
	{
		*(p + i) = 0;
	}
	return (p);
}
