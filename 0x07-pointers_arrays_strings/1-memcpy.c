#include "main.h"
/**
 * _memcpy - function
 * @dest:string1
 * @src:string2
 * @n:number
 * Return:string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
