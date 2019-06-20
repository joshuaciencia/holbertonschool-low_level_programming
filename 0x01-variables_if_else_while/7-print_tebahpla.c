#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 122; c > 96; c--)
		putchar(c);

	putchar('\n');
	return (0);
}
