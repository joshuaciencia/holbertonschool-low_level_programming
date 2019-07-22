#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees a dog struct type
 * @d: type struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
