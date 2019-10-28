#include "sort.h"

/**
 * quick_sort - sorts array with qs algo
 * @size: size of array
 * @array: array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2 || !array)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * quick_sort_recursive - sorts array with qs algo
 * @arr: array
 * @low: start index of partition
 * @hi: end index of partition
 * @s: size of arr
 * Return: void
 */
void quick_sort_recursive(int *arr, int low, int hi, size_t s)
{
	if (low < hi)
	{
		int p = partition(arr, low, hi, s);

		quick_sort_recursive(arr, low, p - 1, s);
		quick_sort_recursive(arr, p + 1, hi, s);
	}
}

/**
 * partition - sorts array with qs algo
 * @arr: array
 * @low: start index of partition
 * @hi: end index of partition
 * @s: size of arr
 * Return: void
 */
int partition(int *arr, int low, int hi, size_t s)
{
	int pivot = arr[hi], tmp;
	int i = low, j;

	for (j = low; j < hi; j++)
	{
		if (arr[j] <= pivot)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			if (i - 1 != j)
				print_array(arr, s);
		}
	}

	tmp = arr[i];
	arr[i] = arr[hi];
	arr[hi] = tmp;
	if (i != hi)
		print_array(arr, s);
	return (i);
}
