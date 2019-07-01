#include "holberton.h"
/**
 * print_numbers - print nums from 0 to 9 but not 2 and 4
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
