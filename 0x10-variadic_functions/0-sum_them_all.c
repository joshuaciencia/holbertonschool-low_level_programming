#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of a & b
 * @n: number of args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;

	int sum = 0;

	unsigned int i;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
