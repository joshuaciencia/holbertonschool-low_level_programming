#include "holberton.h"
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	int r = _islower('y');
	_putchar('\n');
	return (0);
}
/**
 * _islower - checks for lowercase letters
 * Return: void
 * @c: ascii code to be checked
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}

	return (0);
}
