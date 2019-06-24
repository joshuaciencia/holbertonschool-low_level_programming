#include "holberton.h"
/**
 * main - test
 * Return: 0
 */
int main(void)
{
	_putchar(48 + print_last_digit(234));

	_putchar('\n');
	return (0);
}
/**
 * print_last_digit - checks for alpha letters
 * Return: the last digit
 * @n: int to be checked
 */
int print_last_digit(int n)
{
	return (n % 10);
}
