#include "holberton.h"

/**
 * binary_to_uint - converts binary num to uint
 * Return: uint
 * @b: binary number as string
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec, size, i, exp;

	if (!b)
		return (0);
	size = _strlen(b);
	i = 0;
	dec = 0;
	exp = size - 1;

	while (b[i])
	{
		if (b[i] == '1')
			dec += power(2, exp);
		else if (b[i] != '0')
			return (0);
		exp--;
		i++;
	}
	return (dec);
}
/**
 * _strlen - len of string.
 * @s: is a pointer to a char
 * Return: len.
 */

unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * power - power of base
 * @base: base
 * @exp: exponent
 * Return: base raised to exp
 */
unsigned int power(unsigned int base, unsigned int exp)
{
	unsigned int i = 0;
	unsigned int raised = 1;


	if (exp == 0)
		return (1);

	for (i = 0; i < exp; i++)
		raised = raised * base;
	return (raised);
}
