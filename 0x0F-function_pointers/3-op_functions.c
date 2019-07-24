

/**
 * op_add - return the sum of a & b
 * @a: number a
 * @b: number b
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_add - return the difference between a & b
 * @a: number a
 * @b: number b
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (abs(a-b));
}
/**
 * op_mul - returns the product of a & b
 * @a: number a
 * @b: number b
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division of a & b
 * @a: number a
 * @b: number b
 * Return: division
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_div - returns the remainder of a / b
 * @a: number a
 * @b: number b
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
/**
 * get_op_func - selects function to perform operation
 * @s: operator
 * Return: pointer to func that correspond to operator
 */
int (*get_op_func(char *s))(int, int)
{
	int (*ptr_fun)(int, int);

	ptr_fun = *s == '+' ? op_add: *s == '-' ? op_sub: *s == '*' ? op_mul: *s == '/' ? op_div: *s == '%' ? op_mod: NULL;
	if (!ptr_fun)
	{
		printf("Error\n");
		exit(99);
	}
	return (ptr_fun);
}
