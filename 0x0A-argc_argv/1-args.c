#include "holberton.h"
#include <stdio.h>
/**
 * main - number of arguments
 * Return: 0
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
