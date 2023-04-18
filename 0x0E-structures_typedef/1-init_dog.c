#include<stdlib.h>
#include "dog.h"

/**
 * init_dog - intializes a variable of type struct dog
 * @f: pointer to struct dog
 * @name: name to intialize
 * @age: age to intialize
 * @owner: owner to intialize
 */

void init_dog(struct dog *f, char *name, float age, char *owner)
{
	if (f == NULL)
		f = malloc(sizeof(struct dog));
	f->name = name;
	f->age = age;
	f->owner = owner;
}
