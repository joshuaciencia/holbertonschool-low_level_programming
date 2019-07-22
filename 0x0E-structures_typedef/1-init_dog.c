#include "dog.h"
/**
 * init_dog - initialize a type struct dog
 * @d: type struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
