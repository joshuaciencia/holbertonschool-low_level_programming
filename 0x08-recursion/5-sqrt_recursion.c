#include "holberton.h"
/**
 * _sqrt_recursion - natural square root of a number
 * @n: number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{

	if (n - 1 == 0)
		return (0);
	http://www.math.com/school/subject1/lessons/S1U1L9DP.html
	_sqrt_recursion(n / (n - 1))
}
