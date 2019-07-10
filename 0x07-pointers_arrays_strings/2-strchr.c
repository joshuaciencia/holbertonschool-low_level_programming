#include "holberton.h"
/**
 * _strchr - locates character in string
 * @s: string
 * @b: character to locate
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char b)
{
	while (*s != 0)
	{
		if (*s == b)
			return (s);
		s++;
	}

	if (*s == b)
		return (s);

	return ('\0');
}
