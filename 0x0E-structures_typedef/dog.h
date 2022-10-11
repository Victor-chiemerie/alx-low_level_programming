#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates a dog class
 * @name: name of the dog
 * @owner: owner of the dog
 * @age: age of the dog
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_t - new name for a dog type
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
