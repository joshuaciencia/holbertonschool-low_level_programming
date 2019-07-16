#include "holberton.h"
#include <stdio.h>
/**
 * main - print number of args
 * Return: 0
 * @argc: amount of args
 * @argv: pointer to pointers array
 */
int main(int argc, char *argv[])
{
	int n = 0;

	while (argc)
	{
		argv--;
		argc--;
		n++;
	}

	printf("%d\n", n - 1);

	return (0);
}
