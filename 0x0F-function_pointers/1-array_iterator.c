#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a func given as a parameter
 * @array: array pointer
 * @size: size of the array
 * @action: pointer to func
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
