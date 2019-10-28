#include "sort.h"

/**
 * selection_sort - sorts array
 * @size: size of arr
 * @array: array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int curr_i = 0, min_i = 0, sorted_i = 0;

	if (size < 2)
		return;

	while (sorted_i != size)
	{
		min_i = sorted_i;
		for (curr_i = sorted_i; curr_i < size; curr_i++)
		{

			if (array[curr_i] < array[min_i])
				min_i = curr_i;
		}
		if (min_i != sorted_i)
		{
			/* swaps min_i with sorted_i */
			int min = array[min_i];

			array[min_i] = array[sorted_i];
			array[sorted_i] = min;
			print_array(array, size);
		}
		sorted_i++;
	}
}
