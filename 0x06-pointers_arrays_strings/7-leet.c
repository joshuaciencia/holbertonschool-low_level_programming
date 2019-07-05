#include "holberton.h"
/**
 * leet - leet encoding
 * Return: pointer to arr
 * @s: string
 */
char *leet(char *s)
{
	int i, j;

	char low_up[][] = {	{'a', 'A'},
				{'e', 'E'},
				{'o', 'O'},
				{'t', 'T'},
				{'l', '1'}
			};
	int values[5] = {'4', '3', '0', '6', '1'};

	while (s[i] != 0)
	{
		char c = s[i];

		for (j = 0; j < 5; j++)
		{
			if (c == low_up[j][0] || c == low_up[j][1])
			{
				s[i] = value[j];
				break;
			}
		}

		i++;
	}
	return (s);
}
