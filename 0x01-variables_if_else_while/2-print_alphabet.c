#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c < 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
