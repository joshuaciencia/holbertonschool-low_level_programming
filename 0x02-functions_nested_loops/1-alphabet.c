#include "holberton.h"
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
}

