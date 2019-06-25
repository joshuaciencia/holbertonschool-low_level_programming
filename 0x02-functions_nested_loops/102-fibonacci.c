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

void f(int n)
{
	long n1 = 0;

	long n2 = 1;

	int i;

	printf("%ld, ", n1);

	for (i = 0; i < n - 1; i++)
	{

		if (i == n - 2)
			printf("%ld", n2);
		else
			printf("%ld, ", n2);
		long n3 = n1 + n2;

		n1 = n2;
		n2 = n3;
	}
	printf("\n");
}
