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
		} j = i + 1;
		while (format[j] && (format[i] == 'c' ||
			 format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
		{
			if (format[j] == 'c' || format[j] == 'i' ||
			 format[j] == 's' || format[i] == 'f')
			{
				printf(", ");
				break;
			} j++;
		}
		i++;
	} printf("\n");
}
