#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog object
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: returns a newly created dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
	{
		return (puppy);
	}
	puppy->name = name;
	puppy->age = age;
	puppy->owner = owner;
	return (puppy);
}
