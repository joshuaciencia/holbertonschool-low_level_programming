#include "sort.h"
#include <stdlib.h>

/**
 * counting_sort - sorts array with counting algo
 * @size: size of array
 * @arr: array of numbers
 * Return: void
 */
void counting_sort(int *arr, size_t size)
{
	int *count;
	int i, k = 0, total = 0;

	for (i = 0; i < (int)size; i++)
		if (arr[i] > k)
			k = arr[i];
	count = malloc(sizeof(int) * (k + 1));
	if (!count)
		return;
	for (i = 0; i < (int)size; i++)
		count[arr[i]] += 1;

	for (i = 0; i < k + 1; i++)
	{
		if (count[i])
			total++;
		count[i] = total;
	}
	print_array(count, k + 1);
	total = 0;
	for (i = 0; i < k + 1; i++)
	{
		if (count[i] != total)
		{
			arr[total++] = i;
		}
	}
}
