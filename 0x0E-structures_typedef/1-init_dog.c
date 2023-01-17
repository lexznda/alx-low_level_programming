#include "dog.h"

/**
 * init_dog - initializes a struct called dog
 * @d: pointer to the struct
 * @name: pointer to the dog name
 * @age: pointer to the dog's age
 * @owner: pointer to the name of the owner
 * Return: pointer to the struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
