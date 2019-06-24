#include "holberton.h"
/**
 * main - test
 * Return: 0
 */
int main(void)
{
	int r = _isalpha('Z');

	if (r == 1)
		_putchar('y');

	_putchar('\n');
	return (0);
}
/**
 * _isalpha - checks for alpha letters
 * Return: void
 * @c: ascii code to be checked
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}

	return (0);
}
