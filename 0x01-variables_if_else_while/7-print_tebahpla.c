#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	int c;

	int s = sizeof(alphabet) / sizeof(alphabet[0]);

	for (c = s - 1; c > -1; c--)
		putchar(alphabet[c]);

	return (0);
}
