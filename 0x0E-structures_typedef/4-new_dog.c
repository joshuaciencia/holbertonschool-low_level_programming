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
	dog_t *pt;

	char *n, *o;

	int len_name = _strlen(name), len_owner = _strlen(owner), i;

	pt = malloc(sizeof(dog_t));
	if (!pt)
		return (0);
	n = malloc(sizeof(char) * (len_name + 1));
	if (!n)
	{
		free(n);
		free(pt);
		return (0);
	}
	o = malloc(sizeof(char) * (len_owner + 1));
	if (!o)
	{
		free(pt);
		free(o);
		free(n);
		return (0);
	}
	for (i = 0; i < len_name; i++)
		n[i] = name[i];
	n[i] = '\0';
	for (i = 0; i < len_owner; i++)
		o[i] = owner[i];
	o[i] = '\0';
	pt->name = n;
	pt->age = age;
	pt->owner = o;
	return (pt);
}

/**
 * _strlen - len of string
 * Return: length of string
 * @s: string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != 0)
		counter++;
	return (counter);
}
