#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	int c = 48;

	do {
		putchar(c);
		if (c < 57)
		{
			putchar(44);
			putchar(' ');
		}
		c++;
	} while (c < 58);
	putchar('\n');
	return (0);
}
