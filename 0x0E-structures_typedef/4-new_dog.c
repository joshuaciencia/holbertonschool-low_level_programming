#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;

	dog_t *pt;

	char *n, *o;

	int len_name = 0, len_owner = 0, i;

	while (name[len_name])
		len_name++;

	n = malloc(sizeof(char) * (len_name));
	if (!n)
	{
		free(name);
		free(n);
		return (0);
	}
	while (owner[len_owner])
		len_owner++;
	o = malloc(sizeof(char) * (len_owner));
	if (!o)
	{
		free(owner);
		free(o);
		return (0);
	}
	for (i = 0; i < len_name; i++)
		n[i] = name[i];
	n[i] = '\0';
	for (i = 0; i < len_owner; i++)
		o[i] = owner[i];
	o[i] = '\0';

	my_dog.name = n;
	my_dog.age = age;
	my_dog.owner = o;
	pt = &my_dog;
	return (pt);
}


