#include "holberton.h"
/**
 * factorial - return the n factorial
 * @n: number
 * Return: factorial of n or -1 if negative
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
