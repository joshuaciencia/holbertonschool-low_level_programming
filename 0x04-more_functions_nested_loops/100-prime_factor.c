#include "holberton.h"
#include <stdio.h>
/**
 * main - find the largest prime of
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;

	long i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%lu\n", n);
	return (0);
}
