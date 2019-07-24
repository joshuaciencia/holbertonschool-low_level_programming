#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: amount of args
 * @argv: arguments
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int (* ptr)(int, char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned int * p = (unsigned int *)main;

	ptr = main;
	
	printf("%p\n %x\n", *ptr, *p);
	
	return (0);
}
