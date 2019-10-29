#include "sort.h"

/**
 * shell_sort - sorts array with ss algorith
 * @size: size of hash table
 * @arr: array of ints
 * Return: void
 */
void shell_sort(int *arr, size_t size)
{
	int i, j, z;
	int gaps[] = {701, 301, 132, 57, 23, 10, 4, 1};

	if (!arr || size < 2)
		return;

	for (z = 0; z < 8; z++)
	{
		int gap = gaps[z];
		int flag = 0;

		for (i = gap; i < (int)size; i++)
		{
			flag = 1;
			for (j = i; j >= gap && arr[j] < arr[j - gap]; j -= gap)
			{
				int tmp = arr[j];

				arr[j] = arr[j - gap];
				arr[j - gap] = tmp;
			}
		}
		if (flag)
			print_array(arr, size);
	}
}
