#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function
 * @d:1
 * @name:char
 * @age:3
 * @owner:4
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{	
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
