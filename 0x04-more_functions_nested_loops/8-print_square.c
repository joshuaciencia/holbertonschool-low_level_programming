#include "holberton.h"
/**
 * print_square - print diagonal line
 * @n: number of time back slash is printed
 */
void print_square(int n)
{
	if (n > 1)
	{
		int i;

		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
