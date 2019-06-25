#include "holberton.h"
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	char hol[] = "Holberton";

	int i;

	int s = sizeof(hol);

	for (i = 0; i < s; i++)
		_putchar(hol[i]);

	_putchar('\n');
	return (0);
}
