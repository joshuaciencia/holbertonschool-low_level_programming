#include "holberton.h"
/**
 * _strspn - gets the length of a prefix string
 * @s: string
 * @pre: prefix string
 * Return: number of bytes in the initial seg of s
 */
unsigned int _strspn(char *s, char *pre)
{
	unsigned int len;

	unsigned int i;

	while (*s != 0)
	{

		int flag = 0;

		for (i = 0; *(pre + i) != 0; i++)
		{
			if (*(s + len) == *(pre + i))
			{
				len++;
				flag = 1;
				break;
			}
		}
		if (flag != 1)
			break;
	}
	return (len);
}
