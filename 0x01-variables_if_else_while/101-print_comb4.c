#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 1000; c++)
	{
		int f = c / 100;

		int s = c / 10;

		int l = c % 10;

		if (f == s || f == l || s == l)
			continue;

		if (f > s || s > l || s > f || l > f)
			continue;

		putchar((48 + f));
		putchar((48 + s));
		putchar((48 + l));

		if (c == 99)
			continue;

		putchar(44);
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
