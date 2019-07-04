#include "holberton.h"
/**
 * leet - leet encoding
 * Return: pointer to arr
 * @s: string
 */
char *leet(char *s)
{
	int i, j;

	char lower[5] = {'a', 'e', 'o', 't', 'l'};

	char upper[5] = {'A', 'E', 'O', 'T', 'L'};

	char value[5] = {'4', '3', '0', '7', '1'};

	while (s[i] != 0)
	{
		char c = s[i];

		/* check for lowercase */

		for (j = 0; j < 5; j++)
		{
			if (c == lower[j] || c == upper[j])
			{
				s[i] = value[j];
			}
		}

		i++;
	}
	return (s);
}
