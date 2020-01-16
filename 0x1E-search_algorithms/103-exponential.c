#include "search_algos.h"
#include "stdio.h"
/**
 * exponential_search - search value using exponen. search algo.
 * @array: array to search algo
 * @size: size of array
 * @value: value to be retrieve
 * Return: first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 1;
	int right;

	if (!array)
		return (-1);

	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}
	right = i >= (int)size ? (int)size - 1 : i;
	printf("Value found between indexes [%d] and [%d]\n", i / 2, right);
	return (binary_search_ranges(array, value, i / 2, right));
}
/**
 * binary_search_ranges - search value using binary search algo.
 * @array: array to search algo
 * @value: value to be retrieve
 * @left: low search area
 * @right: right search area
 * Return: first index where value is located
 */
int binary_search_ranges(int *array, int value, int left, int right)
{
	int idx;

	while (left <= right)
	{
		int half = (left + right) / 2;

		printf("Searching in array: ");
		for (idx = left; idx <= right; idx++)
		{
			printf("%d", array[idx]);
			if (idx != right)
				printf(", ");
			else
				printf("\n");
		}
		if (array[half] < value)
			left = half + 1;
		else if (array[half] > value)
			right = half - 1;
		else
			return (half);
	}
	return (-1);
}
