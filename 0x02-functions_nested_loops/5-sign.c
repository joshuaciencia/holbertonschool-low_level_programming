#include "holberton.h"
/**
 * print_sign - checks for alpha letters
 * Return: 1 if grater than zero
 * @c: ascii code to be checked
 */
int print_sign(int c)
{
	int r;

	if (c > 0)
	{
		_putchar(43);
		r = 1;
	}
	else if (c == 0)
	{
		_putchar(48);
		r = 0;
	}
	else
	{
		_putchar(45);
		r = -1;
	}
	return (r);
}
