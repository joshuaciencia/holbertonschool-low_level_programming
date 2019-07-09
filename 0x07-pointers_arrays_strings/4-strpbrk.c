#include "holberton.h"
/**
 * _strpbrk - search string for set of bytes
 * @s: string
 * @b: set of bytes
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *b)
{
	unsigned int i;

	while (*s != 0)
	{
		for (i = 0; *(b + i) != 0; i++)
		{
			if (*s == *(b + i))
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
