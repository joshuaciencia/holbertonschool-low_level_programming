#include "holberton.h"
#include <stdio.h>
/**
 * main - adds positive numbers
 * Return: 0
 * @argc: amount of args
 * @argv: pointer to pointers array
 */
int main(int argc, char *argv[])
{
	int n = 0, counter = argc;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	argv += 1;
	counter--;
	while (counter--)
	{

		if (only_nums(*argv) == 0)
		{
			printf("Error\n");
			return (1);
		}
		n = n + _atoi(*argv);
		argv += 1;
	}
	printf("%d\n", n);
	return (0);
}
/**
 * _atoi - convert string to int
 * Return: the int
 * @s: string
 */
int _atoi(char *s)
{
	int size = 0, i, j, sign = 1;

	int number = 0;

	size = _strlen_recursion(s);

	for (i = 0; i < size; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			int pow = 1;

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

/**
 * only_nums - checks for non-digit symbols
 * @s: string
 * Return: 1 if test passed 0 otherwise
 */
int only_nums(char *s)
{
	int c = 0;

	while (*(s + c) != 0)
	{
		if (*(s + c) < 48 || *(s + c) > 57)
		{
			return (0);
		}
		c++;
	}
	if (c == 0)
		return (0);
	return (1);
}
/**
 * _strlen_recursion - return the length of a string
 * @s: string
 * Return: length of str
 */
int _strlen_recursion(char *s)
{

	if (*s == 0)
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
