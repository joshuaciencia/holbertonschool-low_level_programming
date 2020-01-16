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
	int step = sqrt(size), step_back;
	int i = 0, j;

	if (!array || !size)
		return (-1);

	while (i < (int)size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += step;
	}
	step_back = i - step;
	printf("Value found between indexes [%d] and [%d]\n",
			step_back, i);
	for (j = step_back; j < (int)size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
