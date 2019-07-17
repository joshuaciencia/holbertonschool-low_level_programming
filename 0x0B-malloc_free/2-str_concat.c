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
	char *s;

	int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;

	s = malloc(sizeof(char) * (size1 + size2 + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		s[i] = s1[i];
	for (i = 0; i < size2; i++)
		s[size1 + i] = s2[i];

	s[size1 + size2] = 0;
	return (s);
}
