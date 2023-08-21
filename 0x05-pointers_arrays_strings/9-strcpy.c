#include "main.h"
/**
 * _strcpy - function
 * @dest:parameter
 * @src: second
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = -1;

	do {
		l++;
		dest[l] = src[l];
	} while (src[l] != '\0');

	return (dest);

}
