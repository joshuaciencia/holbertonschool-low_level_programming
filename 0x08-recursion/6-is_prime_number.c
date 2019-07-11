#include "holberton.h"
/**
 * is_prime_number - is prime
 * @n: number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
/**
 * _prime - is prime
 * @n: number
 * @i: iteration
 * Return: 1 if prime, 0 otherwise
 */
int _prime(int n, int i)
{
	if (n < 0)
		n = -n;

	if (n == 1)
		return (0);
	else if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);

	return (_prime(n, i + 1));
}
