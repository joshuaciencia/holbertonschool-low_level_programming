#include "holberton.h"
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - reverse string
 * Return: void
 * @s: string
 */
void rev_string(char *s)
{
	int l = strlen(s);

	char *r = (char *)malloc((l + 1) * sizeof(char));

	int i, j;

	r[l] = '\0';

	for (i = 0; i < l; i++)
		r[i] = s[i];

	for (j = 0; j < l; j++)
		s[j] = r[l - 1 - j];

	free(r);
}
