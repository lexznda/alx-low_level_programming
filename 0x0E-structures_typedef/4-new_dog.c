#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, name_size, owner_size;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL || !(name) || !(owner))
	{
		free(ptr);
		return (NULL);
	}

	for (name_size = 0; name[name_size]; name_size++)
	{
	}
	for (owner_size = 0; owner[owner_size]; owner_size++)
	{
	}
	ptr->name = malloc(name_size + 1);
	ptr->owner = malloc(owner_size + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < name_size; i++)
		ptr->name[i] = name[i];
	ptr->name = '\0';

	ptr->age = age;

	for ( i = 0; i < owner_size; i++)
		ptr->owner[i] = owner[i];
	ptr->owner = '\0';
	return (ptr);
}
