#include "holberton.h"
/**
 * more_numbers - print nums from 0 to 14, 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				int n1 = j / 10;

				int n2 = j % 10;

				_putchar(48 + n1);
				_putchar(48 + n2);
			}
			else
				_putchar(48 + j);
		}
		_putchar('\n');
	}
}
