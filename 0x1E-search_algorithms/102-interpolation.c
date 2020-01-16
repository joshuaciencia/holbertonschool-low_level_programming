#include "search_algos.h"
#include <stdio.h>
/**
 * interpolation_search - search value using interpo. search algo.
 * @array: array to search algo
 * @size: size of array
 * @value: value to be retrieve
 * Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	while (left <= right)
	{
		size_t pos = left +
			(((double)(right - left)
			/ (array[right] - array[left]))
			* (value - array[left]));
		if (pos > size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] < value)
			left = pos + 1;
		else if (array[pos] > value)
			right = pos - 1;
		else
			return (pos);
	}
	return (-1);
}
