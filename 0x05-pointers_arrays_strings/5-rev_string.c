#include "holberton.h"
/**
 * rev_string - reverse string
 * Return: void
 * @s: string
 */
void rev_string(char *s)
{
	int c = 0;

	int c2 = 0;

	while (s[c] != 0)
	{
		c++;
	}

	while (c2 != c - 1)
	{
		char t1 = s[c2];

		char t2 = s[c - 1];

		s[c2] = t2;
		s[c - 1] = t1;
		c2++;
		c--;
	}

}
