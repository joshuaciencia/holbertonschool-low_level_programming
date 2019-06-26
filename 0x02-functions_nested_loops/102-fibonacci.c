#include "holberton.h"
#include <stdio.h>
/**
 * main - first 50 f numbers
 * Return: 0
 */
int main(void)
{
	f(50);
	return (0);
}

/**
 * f - first 50 fibonacci numbers
 * @n: n fibonacci numbers
 */
void f(int n)
{
	unsigned long n1 = 1;

	unsigned long n2 = 2;

	int i;

	printf("%lu, ", n1);
	printf("%lu, ", n2);

	for (i = 0; i < n - 2; i++)
	{
		unsigned long n3 = n1 + n2;

		n1 = n2;
		n2 = n3;

		if (i == n - 3)
			printf("%lu", n2);
		else
			printf("%lu, ", n2);
	}
	printf("\n");
}
