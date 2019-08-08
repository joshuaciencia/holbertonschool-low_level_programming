#include "holberton.h"
/**
 * get_bit - get value of bit at index
 * Return: value
 * @n: num
 * @index: index given
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c;

	if (index > 64)
		return (-1);

	for (c = 0; c < index; c++)
		n >>= 0x1;

	return (n & 0x1);
}
