#include "holberton.h"
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	print_alphabet_x10();
	_putchar('\n');
	return (0);
}
/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
