#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers to n
 * Return: the absolute value of an integer
 * @n: integer
 */
void print_to_98(int n)
{
	int i = n;

	if (n == 98)
		printf("%d", i);
	else
		printf("%d, ", i);

	while (i != 98)
	{
		if (i > 98)
			i--;
		else
			i++;
		if (i != 98)
			printf("%d, ", i);
		else
			printf("%d", i);
	}
	printf("\n");
}
