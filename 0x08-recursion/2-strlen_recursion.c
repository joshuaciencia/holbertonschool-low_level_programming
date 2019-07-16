#include "holberton.h"
/**
 * _strlen_recursion - return the length of a string
 * @s: string
 * Return: length of str
 */
int _strlen_recursion(char *s)
{

	if (*s == 0)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
