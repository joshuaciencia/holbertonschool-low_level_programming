#include "holberton.h"
/**
 * print_number - print diagonal line
 * @n: number of time back slash is printed
 */
void print_number(int n)
{
	int size = n;

	int digits = 0;

	int i;

	if (n < 0)
		size = -size;
	if (n == 0)
		digits = 1;

	while (size >= 1)
	{
		size = size / 10;
		digits++;
	}

	for (i = 0; i < digits; i++)
	{

		int pow = 1;

		int j;

		int d;

		for (j = 0; j < digits - i - 1; j++)
		{
			pow = pow * 10;
		}

		d = ((n / pow) % 10);
		if (n < 0)
		{
			d = -d;
			if (i == 0)
				_putchar(45);
		}
		_putchar(48 + d);
	}
}
