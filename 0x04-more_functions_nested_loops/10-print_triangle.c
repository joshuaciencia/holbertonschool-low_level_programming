#include "holberton.h"
/**
 * print_triangle - print a triangle
 * @n: size of the triangle
 */
void print_triangle(int n)
{

	if (n > 0)
	{
		int i;

		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j > n - 2 - i)
					_putchar(35);
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
