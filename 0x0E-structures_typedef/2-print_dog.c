#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the elements of a dog
 * @d: pointer to the dog object
 *
 * Return: there is no return value
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->age : "(nil)");
	}
}
