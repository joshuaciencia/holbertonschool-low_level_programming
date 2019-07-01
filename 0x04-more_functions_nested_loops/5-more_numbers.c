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
				print_two_digits(j);
			}
			else
				_putchar(48 + j);
		}
		_putchar('\n');
	}
}
/**
 * print_two_digits - prints two digits
 * @n: number
 */
void print_two_digits(int n)
{
	int i;

	for (i = 0; i < 2; i++)
	{

		int dig;

		if (i == 0)
			dig = n / 10;
		else
			dig = n % 10;

		_putchar(48 + dig);

	}
}
