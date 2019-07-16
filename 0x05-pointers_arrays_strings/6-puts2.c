#include "holberton.h"
/**
 * puts2 - prints one char out of 2 strs
 * Return: void
 * @str: string
 */
void puts2(char *str)
{
	int s = 0;

	int i;

	while (str[s] != 0)
	{
		s++;
	}
	for (i = 0; i < s; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
