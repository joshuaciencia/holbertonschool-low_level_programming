#include "holberton.h"
/**
 * _isupper - checks for upper letters
 * Return: the absolute value of an integer
 * @c: number to be proccesed
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
