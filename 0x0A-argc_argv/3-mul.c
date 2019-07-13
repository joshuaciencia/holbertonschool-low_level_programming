#include "holberton.h"
#include <stdio.h>
/**
 * main - add two numbers
 * Return: 0
 * @argc: amount of args
 * @argv: pointer to pointers array
 */
int main(int argc, char *argv[])
{
	int n = 1, counter = argc;

	argv += 1;
	counter--;
	while (counter--)
	{
		n = n * _atoi(*argv);
		argv += 1;
	}

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
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
