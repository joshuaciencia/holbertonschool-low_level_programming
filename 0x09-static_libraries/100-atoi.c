#include "holberton.h"
/**
 * _atoi - sonvert string to int
 * Return: the int
 * @s: string
 */
int _atoi(char *s)
{
	int size = 0, i, j, sign = 1;

	unsigned int number = 0;

	while (s[size] != 0)
	{
		size++;
	}
	for (i = 0; i < size; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			unsigned int pow = 1;

			j = i;
			while (s[j] >= 48 && s[j] <= 57)
			{
				j++;
			}
			j--;
			while (j >= i)
			{
				number += (s[j] - '0') * pow;
				pow *= 10;
				j--;
			}
			break;
		}
		else if (s[i] == 45)
			sign = -sign;
	}
	if (sign < 0)
		number = -number;
	return (number);
}
