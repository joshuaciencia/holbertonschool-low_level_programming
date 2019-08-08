#include "holberton.h"
/**
 * set_bit - set bit to 1 at index
 * Return: 1 if worked, -1 if failed
 * @n: pointer to number
 * @index: given index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	


	*n = (*n) + power(2, index);
	return (1);
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
