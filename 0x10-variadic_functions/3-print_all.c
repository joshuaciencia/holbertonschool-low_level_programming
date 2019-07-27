#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of args passed to the func
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j = 0;
	char *s;

	va_start(list, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				s = va_arg(list, char *);
				if (s)
				{
					printf("%s", s);
					break;
				}
				printf("(nil)");
				break;
		}
		j = i + 1;
		while (format[j] && isAval(format[j]) && i != 0)
		{
			printf(", ");
			break;
		}
		i++;
	}
	printf("\n");
}
/**
 * isAval - checks if c is available
 * @c: char
 * Return: 1 if succes 0 otherwise
 */
int isAval(char c)
{
	if (c == 'c' || c == 'i' || c == 'f' || c == 's')
		return (1);
	return (0);
}
