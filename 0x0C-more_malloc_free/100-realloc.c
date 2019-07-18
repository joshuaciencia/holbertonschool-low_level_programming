#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory using m and f
 * @ptr: pointer to previously malloc
 * @old_size: previous size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int min_size = old_size > new_size ? new_size : old_size;

	unsigned int max_size = old_size == min_size ? new_size : old_size;

	void *p;

	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
	{
		char *pp;

		pp = ((char *)ptr);
		free(pp + new_size);
	}
	p = malloc(max_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < min_size; i++)
		((char *)p)[i] = ((char *)p)[i];
	return (p);
}
