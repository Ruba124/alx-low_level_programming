#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function
 * @d:p
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	else
	{	printf("Name: %s", d->name); }
	printf("\n");
	if (d->age == 0)
		printf("Age: (nil)");
	else
	{	printf("Age: %f", d->age); }
	printf("\n");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
	{	printf("Owner: %s", d->owner); }
	printf("\n");
}
