#include "holberton.h"
/**
 * swap_int - swaps values
 * Return: void
 * @a: first number
 * @b: second number
 */
void swap_int(int *a, int *b)
{

	int t = *a;

	*a = *b;
	*b = t;
}
