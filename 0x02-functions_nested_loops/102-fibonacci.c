#include "holberton.h"
#include <stdio.h>
/**
 * main - first 50 f numbers
 * Return: 0
 */
int main(void)
{
	int last = f(50);

	return (0);
}

int f(int n)
{
	if (n < 2)
	{
		printf("%d, ", n);
		return (n);
	} else
	{
		printf("%d, ", n);
		return (f(n - 1) +  f(n - 2));
	}
}
