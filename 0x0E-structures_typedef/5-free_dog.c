#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees a god struct type
 * @d: type struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
