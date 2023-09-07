#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function
 * @b:int
 * Return:pointr
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
	{	exit(98); }
	return (c);
}

