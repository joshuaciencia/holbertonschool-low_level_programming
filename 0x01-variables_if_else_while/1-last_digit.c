#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This is a description
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	n = n % 10;
	printf("is %d ", n);
	if (n > 5)
		printf("and is greater than 5");
	if (n == 0)
		printf("and is 0");
	if (n < 6 && n != 0)
		printf("and is less than 6 and not 0");
	printf("\n");
	return (0);
}
