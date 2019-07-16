#include "holberton.h"
/**
 * _strstr - locates a substring
 * @s1: search area
 * @s2: string to be searcht
 * Return: pointer to the beginning  of the located  substring
 */
char *_strstr(char *s1, char *s2)
{
	unsigned int i, size = 0;

	while (*(s2 + size) != 0)
	{
		size++;
	}

	while (*s1 != 0)
	{
		unsigned int equality = 0;

		for (i = 0; i < size; i++)
		{
			if (*(s1 + i) == *(s2 + i))
				equality++;
		}
		if (equality == size)
		{
			return (s1);
		}
		s1++;
	}

	return (0);
}
