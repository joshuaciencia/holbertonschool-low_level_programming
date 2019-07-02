#include "holberton.h"
/**
 * _strlen - len of string
 * Return: length of string
 * @s: string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != 0)
	{
		counter++;
	}

	return (counter);
}
