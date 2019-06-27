#include "holberton.h"
/**
 * print_diagonal - print diagonal line
 * @n: number of time back slash is printed
 */
void print_diagonal(int n)
{
	if (n > 1)
	{
		int i;

		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					_putchar(92);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
