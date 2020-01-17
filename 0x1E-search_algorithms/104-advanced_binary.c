#include "search_algos.h"
#include "stdio.h"
/**
 * advanced_binary - search value using exponen. search algo.
 * @array: array to search algo
 * @size: size of array
 * @value: value to be retrieve
 * Return: first index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;

	if (!array)
		return (-1);
	return (binary_recursion(array, left, right, value));
}
/**
 * binary_recursion - search value using bunary search algo.
 * @array: array to search algo
 * @left: left of sub-array
 * @right: right of sub-array
 * @value: value to be retrieve
 * Return: first index where value is located
 */
int binary_recursion(int *array, int left, int right, int value)
{
	int half;
	int i;

	if (left >= right)
		return (-1);

	half = (left + right) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
		else
			printf("\n");
	}
	if (array[half] < value)
		return (binary_recursion(array, half + 1, right, value));
	else if (array[half] > value)
		return (binary_recursion(array, left, half - 1, value));
	else if (array[half - 1] != value)
		return (half);
	else
		return (binary_recursion(array, left, half, value));

}
