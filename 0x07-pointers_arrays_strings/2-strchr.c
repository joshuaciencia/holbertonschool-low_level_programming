#include "holberton.h"
/**
 * _strchr - locates character in string
 * @s: string
 * @b: character to locate
 * Return: pointer to the first occurrence of the character
 */
char *_strchr(char *s, char b)
{
	while (*s != 0 && *s != b)
	{
		s++;
	}
	return (s);
}
