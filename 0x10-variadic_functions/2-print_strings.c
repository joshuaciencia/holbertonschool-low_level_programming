#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string separator
 * @n: number of args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;

	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(list, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (i == n - 1)
			break;

		if (separator)
			printf("%s", separator);
	}

	printf("\n");
}
