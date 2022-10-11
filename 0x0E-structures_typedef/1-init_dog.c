#include "dog.h"

/**
 * init_dog - creates a new dog
 * @d: pointer to the dog object
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
 *
 * Return: there is no return value
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
