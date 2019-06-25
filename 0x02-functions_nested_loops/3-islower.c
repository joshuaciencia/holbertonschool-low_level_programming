#include "holberton.h"
/**
 * _islower - checks for lowercase letters
 * Return: void
 * @c: ascii code to be checked
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
