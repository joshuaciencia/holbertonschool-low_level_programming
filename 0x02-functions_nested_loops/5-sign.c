#include "holberton.h"
/**
 * main - test
 * Return: 0
 */
int main(void)
{
	_putchar('\n');
	return (0);
}
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
		_putchar('+');
		r = 1;
	}
	else if (c == 0)
	{
		_putchar('0');
		r = 0;
	}
	else
	{
		_putchar('-');
		r = -1;
	}
	return (r);
}
