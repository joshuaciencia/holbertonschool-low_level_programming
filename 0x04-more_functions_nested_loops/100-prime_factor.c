#include "holberton.h"
#include <stdio.h>
/**
 * main - find the largest prime of 
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;

	long i;

	long largest = 1;

	for (i = 0; i < n; i++)
	{

		int p = 1;

		if ((i != 2 && i != 5) &&
			 (i % 10 == 0  ||
			 i % 10 == 2 ||
			 i % 10 == 4 ||
			 i % 10 == 5 ||
			 i % 10 == 6 ||
			 i % 10 == 8))
			continue;

		if (i != 3)
		{
			int t = i, sum = 0, remainder;

			while (t % 10)
			{
				sum = sum + remainder;
				t = t / 10;
			}
			if (sum % 3 == 0)
				continue;
		}

		long j;

		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				goto cnt;
			}
		}


		if (i > largest)
			largest = i;

		cnt:;
	}

}
