#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0, i, j;

	char *s;

	if (s1 != NULL)
	{
		while (*(s1 + size1) != 0)
		{
			size1++;
		}
	}
	else
		size1 = 1;

	if (s2 != NULL)
	{
		while (*(s2 + size2) != 0)
		{
			size2++;
		}
	}
	else
		size2 = 1;

	s = malloc(sizeof(char) * (size1 + size2 - 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(s + i) = *(s1 + i);

	for (j = 0; j < size2; j++)
		*(s + i + j) = *(s2 + j);

	*(s + i + j + 1) = '\0';
	return (s);
}
