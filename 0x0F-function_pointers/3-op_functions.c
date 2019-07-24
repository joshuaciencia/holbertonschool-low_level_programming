#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
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
 * op_sub - return the difference between a & b
 * @a: number a
 * @b: number b
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
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
 * op_mod - returns the remainder of a / b
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
