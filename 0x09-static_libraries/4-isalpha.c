#include "holberton.h"
/**
 * _isalpha - checks for alpha letters
 * Return: void
 * @c: ascii code to be checked
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
