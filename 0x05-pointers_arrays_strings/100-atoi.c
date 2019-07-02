#include "holberton.h"
/**
 * _atoi - sonvert string to int
 * Return: the int
 * @s: string
 */
int _atoi(char *s)
{
	int size = 0, i, j;

	int number = 0;

	while (s[size] != 0)
	{
		size++;
	}
	for (i = size - 1; i > 0; i--)
	{
		char c = s[i];

		if (c >= '0' && c <= '9')
		{
			j = i;
			while (j >= 0 && (s[j] >= '0' && s[j] <= '9'))
			{
				number += (c - '0') * pow;
				pow *= 10;
				j--;
			}
			i = j;
		}
	}
}
