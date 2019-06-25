#include "holberton.h"
#include <stdbool.h>
/**
 * main - test
 * Return: 0
 */
int main(void)
{
	print_to_98(5);
	_putchar('\n');
	return (0);
}
/**
 * print_to_98 - prints natural numbers to n
 * Return: the absolute value of an integer
 * @n: integer
 */
void print_to_98(int n)
{
	int i = n;

	while (i != 98)
	{

		int whole = i;

		int digits = 0;

		int j;

		if (i > 98)
			i--;
		else
			i++;

		while (true)
		{
			if (whole < 1)
				break;
			whole = whole / 10;
			digits++;
		}

		for (j = 0; j < digits; j++)
		{

			int pow = 1;

			int c;

			for (c = 0; c < digits - 1; c++)
			{
				pow = pow * 10;
			}

			_putchar(48 + (i / pow) % 10);
		}		
		
		if (i != 98)
		{
			_putchar(44);
			_putchar(' ');
		}
	}
}
