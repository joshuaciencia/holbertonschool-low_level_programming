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

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(p + i) = malloc(sizeof(int) * width);
		if (*(p + i) == NULL)
		{
			int k = 0;

			for (k = 0; k < i; k++)
				free(*(p + k));
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(*(p + i) + j) = 0;
	return (p);
}
