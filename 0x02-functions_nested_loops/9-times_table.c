#include "holberton.h"
/**
 * times_table - prints all minutes
 * Return: void
 */
void times_table(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int n = j * i;

			int n1 = n / 10;

			int n2 = n % 10;

			if (n < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(48 + n);
			} else
			{
				_putchar(' ');
				_putchar(48 + n1);
				_putchar(48 + n2);
			}

			if (j != 9)
				_putchar(44);

		}
	}
}
