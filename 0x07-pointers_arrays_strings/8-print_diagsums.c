#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals
 * @a: array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	unsigned int sum1 = 0, sum2 = 0;

	int i;

	for (i = 0; i < size; i++)
	{
		int i1 = i + size * i;
		int i2 = size * (i + 1) - (i + 1);

		sum1 += a[i1];
		sum2 += a[i2];
	}

	printf("\n%d, %d\n", sum1, sum2);
}
