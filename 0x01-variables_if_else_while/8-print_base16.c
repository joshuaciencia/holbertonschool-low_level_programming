#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	int c;

	char hex[] = "0123456789abcdef";

	int s = sizeof(hex) / sizeof(hex[0]);

	for (c = 0; c < s; c++)
		putchar(hex[c]);

	putchar('\n');
	return (0);
}
