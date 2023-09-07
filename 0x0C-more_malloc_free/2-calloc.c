#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function
 * @nmemb:int
 * @size:int
 * Return:int
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *f;

	if (nmemb == 0)
	{	return (NULL); }
	f = malloc(nmemb * size);
	if (!f)
	{	return (NULL); }
	return (f);
}
