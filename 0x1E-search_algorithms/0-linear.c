#include "search_algos.h"
#include "stdio.h"
/**
 * linear_search - search value using linear search algo.
 * @array: array to search algo
 * @size: size of array
 * @value: value to be retrieve
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int idx;

	if (!array)
		return (-1);

	for (idx = 0; idx < (int)size; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (value);
	}
	return (-1);
}
