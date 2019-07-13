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

	int c = 0;

	while (c < argc)
	{
		if (c == 0)
		{
			printf("%s\n", argv[c]);
			break;
		}
	}
	return (0);
}
