#include "holberton.h"
/**
 * print_alphabet - prints alphabet
 * Return: the result of the adition
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

