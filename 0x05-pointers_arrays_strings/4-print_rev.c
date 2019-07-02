#include "holberton.h"
/**
 * print_rev - prints func reversed
 * Return: void
 * @c: string
 */
void print_rev(char *c)
{
	int counter = 0;

	while (c[counter] != 0)
	{
		counter++;
	}

	while (counter != 0)
	{
		_putchar(c[counter - 1]);
		counter--;
	}
	_putchar('\n');
}
