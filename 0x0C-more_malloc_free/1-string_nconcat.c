#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	if (n >= size2)
		n = size2;
	s = malloc(sizeof(char) * (size1 + n + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		s[i] = s1[i];
	for (i = 0; i < n; i++)
		s[size1 + i] = s2[i];

	s[size1 + n] = 0;
	return (s);
}
