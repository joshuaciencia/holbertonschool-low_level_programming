#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 100; c++)
	{
		int last = c % 10;

		int first = c / 10;

		if (first == last)
			continue;

		if (first > last)
			continue;

		putchar((48 + first));
		putchar((48 + last));

		if (c == 89)
			continue;

		putchar(44);
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
