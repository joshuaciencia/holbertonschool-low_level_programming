#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints min number of coins to make change
 * Return: 0
 * @argc: amount of args
 * @argv: pointer to pointers array
 */
int main(int argc, char *argv[])
{
	int n, count = 0, i;

	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	argv += 1;
	n = atoi(*argv);

	if (n < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	while (n > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (coins[i] <= n)
			{
				n -= coins[i];
				count++;
				break;
			}
		}
	}

	printf("%d\n", count);
	return (0);
}
