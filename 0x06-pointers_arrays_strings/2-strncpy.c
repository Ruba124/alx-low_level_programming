#include "main.h"
/**
 * _strncpy - functoin
 * @dest:string
 * @src:string 32
 * @n:int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;
	int m;

	while (src[l] != '\0')
	{
		l++;
	}
	for (m = 0; m < l && src[m] != '\0'; m++)
	{
		dest[m] = src[m];
	}
	while (m < l)
	{
		dest[m] = '\0';
	}
	return (dest);
}
