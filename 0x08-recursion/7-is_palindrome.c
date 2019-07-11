#include "holberton.h"
/**
 * is_palindrome - is palindrome
 * @n: number
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (pali(s, s + _strlen_recursion(s) - 1));
}
/**
 * pale - is palindrome
 * @s: start of string
 * @e: end of string
 * Return: 1 if palindrome, 0 otherwise
 */
int pali(char *s, char *e)
{
	if (*s != *e)
		return (0);
	else if (s >= e)
		return (1);
	else
		return (pali(s + 1, e - 1));
}

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
