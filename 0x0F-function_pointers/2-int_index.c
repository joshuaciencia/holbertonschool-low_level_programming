#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array pointer
 * @size: size of the array
 * @cmp: func to search a number
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !cmp || !array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
