#include "main.h"
#include <stdlib.h>
/**
 * _realloc - function
 * @ptr:int
 * @new_size:inyt
 * @old_size:int
 * Return:ll
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *P;
	char *p1;
	unsigned int k;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (ptr = malloc(new_size));
	}
	P = malloc(new_size);
	if (!p)
	{	return (NULL); }
	p1 = ptr;
	if (new_size > old_size)
	{
		for (k = 0; k < old_size; k++)
			P[k] = p1[k];
	}
	if (new_size < old_size)
	{
		for (k = 0; k < new_size; k++)
			P[k] = p1[k];
	}
	free(ptr);
	return (P);
}

