#include "holberton.h"
/**
 * print_line - print straigh line
 * @n: number of time _ is printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n < 1)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
