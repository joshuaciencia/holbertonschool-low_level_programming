#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	unsigned int c;

	for (c = 0; c < sizeof(alphabet) / sizeof(alphabet[0]); c++)
		putchar((char)alphabet[c]);

	putchar('\n');
	return (0);
}
