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
	unsigned int g;
	char *f;

	if (nmemb == 0 || size == 0)
	{	return (NULL); }
	f = malloc(nmemb * size);
	if (!f)
	{	return (NULL); }
	for (g = 0; g < nmemb * size; g++)
	{
		f[g] = 0;
	}
	return (f);
}
