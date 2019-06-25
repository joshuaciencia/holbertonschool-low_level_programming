#include "holberton.h"
/**
 * jack_bauer - prints all minutes
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			int h1 = i / 10;

			int h2 = i % 10;

			int m1 = j / 10;

			int m2 = j % 10;

			_putchar(48 + h1);
			_putchar(48 + h2);
			_putchar(58);
			_putchar(48 + m1);
			_putchar(48 + m2);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
