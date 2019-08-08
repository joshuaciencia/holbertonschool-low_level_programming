#include "holberton.h"
/**
 * print_binary - prints binary representation of a num
 * Return: void
 * @n: num
 */
void print_binary(unsigned long int n)
{
	/*unsigned int remainder, num;*/

	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 0x01);

	_putchar((n & 0x01) + '0');
}
