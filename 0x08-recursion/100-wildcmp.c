#include "holberton.h"
/**
 * wildcmp - compares two string
 * @s1: string1
 * @s2: string2
 * Return: 1 if equal 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	else if (*s1 == 0 && *s2 == 0)
		return (1);
	else if (*s2 == '*')
		wildcmp(s1 + 1, s2);
	else if (*s2 == '*' && *s1 == *(s2 + 1))
		return (wildcmp(s1 +1, s2 + 1));
	return (wildcmp(s1 + 1, s2 + 1));

}
