#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */
int main(void)
{
	int i;

	int j;

	for (i = 0; i < 100; i++)
	{

		int f1 = i / 10;
		int s1 = i % 10;

		for (j = i; j < 100; j++)
		{
			int f2 = j / 10;
			int s2 = j % 10;

			if (f1 == f2 && s1 == s2)
				continue;

			putchar((48 + f1));
			putchar((48 + s1));
			putchar(' ');
			putchar((48 + f2));
			putchar((48 + s2));
			if (i == 98 && j == 99)
				continue;
			putchar(44);
			putchar(' ');

		}
	}

	putchar('\n');
	return (0);
}
