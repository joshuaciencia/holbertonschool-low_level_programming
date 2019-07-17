#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - splits string into words
 * @str: string
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	char **s;

	int words, i = 0, filler = 0;

	if (str == NULL || *str == 0)
		return (NULL);
	words = getWords(str);
	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ')
		{
			int size = get_size_of_first(str + i);

			s[filler] = malloc(sizeof(char) * (size + 1));
			if (s[filler] == NULL)
			{
				int k;

				for (k = 0; k < filler; k++)
				{
					free(s[k]);
				}
				free(s);
				return (NULL);
			}
			fill(s[filler], str + i, size);
			filler++;
			i += size - 1;
		}
		i++;
	}
	return (s);
}
/**
 * getWords - get number of words in string
 * @s: string
 * Return: words
 */
int getWords(char *s)
{
	int i = 0, words = 0;

	while (s[i])
	{
		if (i == 0 && s[i] != ' ')
			words++;

		if (s[i] == ' ' && s[i + 1] && s[i + 1] != ' ')
		{
			words++;
		}
		i++;
	}
	return (words);
}
/**
 * get_size_of_first - size of first word in string
 * @s: string
 * Return: size of word
 */
int get_size_of_first(char *s)
{
	int i = 0;

	while (s[i] && s[i] != ' ')
		i++;
	return (i);
}
/**
 * fill - fills s2 in s1
 * @s1: string1
 * @s2: string2
 * @size: size of s2
 * Return: void
 */
void fill(char *s1, char *s2, int size)
{
	int i = 0;

	while (i < size)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[size] = '\0';
}
