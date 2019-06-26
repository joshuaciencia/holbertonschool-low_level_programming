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
	long long n1 = 1;

	long long n2 = 2;

	int i;

	printf("%llu, ", n1);
	printf("%llu,\n", n2);

	for (i = 0; i < n - 2; i++)
	{
		long long n3 = n1 + n2;

		n1 = n2;
		n2 = n3;

		if (i == n - 3)
			printf("%llu", n2);
		else
			printf("%llu, ", n2);
	}
	printf("\n");
}
