#include "holberton.h"
/**
 * main - test
 * Return: 0
 */
int main(void)
{
	int a = _abs(-10);

	if (a > 0)
		_putchar('y');

	_putchar('\n');
	return (0);
}
/**
 * _abs - checks for alpha letters
 * Return: the absolute value of an integer
 * @c: number to be proccesed
 */
int _abs(int c)
{
	if (c < 0)
		return (-c);
	return (c);
}
