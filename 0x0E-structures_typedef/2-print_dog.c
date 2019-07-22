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

	if (!d->name)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("Age: ");

	if (!d->age)
		printf("(nil)\n");
	else
		printf("%.6f\n", d->age);

	printf("Owner: ");

	if (!d->owner)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
