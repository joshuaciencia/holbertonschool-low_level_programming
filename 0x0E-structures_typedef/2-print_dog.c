#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print dog struct
 * @d: struct dog to be printed
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: ");

	if (d->name)
		printf("%s\n", d->name);
	else
		printf("(nil)\n");

	printf("Age: ");

	if (d->age)
		printf("%.6f\n", d->age);
	else
		printf("(nil)\n");

	printf("Owner: ");

	if (d->owner)
		printf("%s\n", d->owner);
	else
		printf("(nil)\n");
}
