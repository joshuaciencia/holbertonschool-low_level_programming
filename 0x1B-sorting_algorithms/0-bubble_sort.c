#include "sort.h"

/**
 * bubble_sort - sorts array with bs algorith
 * @size: size of hash table
 * @array: array of ints
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int swapped = 1;
	unsigned int i;

	if (!array || size < 2)
		return;

	while (swapped)
	{
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				int next = array[i + 1];

				array[i + 1] = array[i];
				array[i] = next;
				swapped = 1;
				print_array(array, size);
			}
		}
	}
}
