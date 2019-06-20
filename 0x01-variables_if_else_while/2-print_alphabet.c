#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";

	int c;

	int s = sizeof(alph) / sizeof(alph[0]);

	for (c = 0; c < s; c++)
	{
		int ch = alph[c];

		putchar(ch);
	}
	putchar('\n');
	return (0);
}
