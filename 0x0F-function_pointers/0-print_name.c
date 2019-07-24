#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to func
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
