#include "sort.h"

void quick_sort(int *array, size_t size)
{
	quick_sort_recursive(array, 0, size - 1, size);
}

void quick_sort_recursive(int *arr, int low, int hi, size_t s)
{
	if (low < hi)
	{
		int p = partition(arr, low, hi, s);
		
		quick_sort_recursive(arr, low, p - 1, s);
		quick_sort_recursive(arr, p + 1, hi, s);
	}
}

int partition(int *arr, int low, int hi, size_t s)
{
	int pivot = arr[hi], tmp;
	int i = low, j;

	for (j = low; j < hi; j++)
	{
		if (arr[j] < pivot)
		{
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			print_array(arr, s);
		}
	}

	tmp = arr[i];
	arr[i] = arr[hi];
	arr[hi] = tmp;
	print_array(arr, s);
	return (i);
}
