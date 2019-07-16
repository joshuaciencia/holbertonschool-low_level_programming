#include "holberton.h"
/**
 * _is_square - natural square root of a number
 * @x: number
 * @i: auxiliar variable
 * Return: natural square root
 */
int _is_square(int x, int i)
{

	int sqr = i * i;

	if (sqr == x)
		return (i);
	else if (sqr > x)
		return (-1);

	return (_is_square(x, i + 1));
}
/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_is_square(n, 1));
}
