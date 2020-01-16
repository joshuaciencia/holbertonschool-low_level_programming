#include "search_algos.h"
#include "stdio.h"
/**
 * binary_search - search value using binary search algo.
 * @array: array to search algo
 * @size: size of array
 * @value: value to be retrieve
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
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
