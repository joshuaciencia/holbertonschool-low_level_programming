#include "holberton.h"
/**
 * get_endianness - little or big endian
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int bit = 0x01;

	if (((bit << 4) & 0x1) == 0x1)
		return (0);
	else
		return (1);

}
