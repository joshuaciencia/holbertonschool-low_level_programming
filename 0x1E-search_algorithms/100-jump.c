#include "search_algos.h"
#include <stdio.h>
#include <math.h>
/**
 * jump_search - search value using jump search algo.
 * @array: array to search algo
 * @size: size of array
 * @value: value to be retrieve
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size), step_back, idx = 0;
	int *p = array;
	int i;

	if (!array)
		return (-1);

	while (*p < value && idx * step < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", idx * step, *p);
		p += step;
		idx++;
	}
	step_back = (idx - 1) * step;

	printf("Value found between indexes [%d] and [%d]\n",
			step_back, idx * step);
	for (i = step_back; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
