#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees struct dog
 * @d: pointer of struct dog
 * Return: voif
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
