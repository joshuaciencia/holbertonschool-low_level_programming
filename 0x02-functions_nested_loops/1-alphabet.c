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
}

