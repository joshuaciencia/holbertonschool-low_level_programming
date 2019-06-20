#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int c;

	int size = sizeof(alphabets) / sizeof(alphabets[0]);

	for (c = 0; c < size; c++)
		putchar((char)alphabets[c]);

	putchar('\n');
	return (0);
}
