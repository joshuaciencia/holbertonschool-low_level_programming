#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints array
 * Return: length of string
 * @a: array of ints
 * @n: n elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
