#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - selects function to perform operation
 * @s: operator
 * Return: pointer to func that correspond to operator
 */
int (*get_op_func(char *s))(int, int)
{
	int (*ptr_fun)(int, int);

	ptr_fun = *s == '+' ? op_add :
*s == '-' ? op_sub :
*s == '*' ? op_mul :
*s == '/' ? op_div :
*s == '%' ? op_mod : NULL;
	if (!ptr_fun)
	{
		printf("Error\n");
		exit(99);
	}
	return (ptr_fun);
}
