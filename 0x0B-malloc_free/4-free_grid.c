#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees 2d array
 * @grid: 2d arr
 * @height: height of 2d arr
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));

	free(grid);
}
