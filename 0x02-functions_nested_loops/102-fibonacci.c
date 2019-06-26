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
	unsigned long long n1 = 1;

	unsigned long long n2 = 2;

	int i;

	printf("%llu, ", n1);

	for (i = 0; i < n - 1; i++)
	{

		if (i == n - 2)
			printf("%llu", n2);
		else
			printf("%llu, ", n2);
		unsigned long long n3 = n1 + n2;

		n1 = n2;
		n2 = n3;
	}
	printf("\n");
}
