#include "holberton.h"
/**
 * _puts - prints string
 * Return: length of string
 * @str: string
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != 0)
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
