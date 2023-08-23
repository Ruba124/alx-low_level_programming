#include "main.h"
/**
 * _strcat - function
 * @dest:string 1
 * @src:string 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int m, n;

	for (m = 0; dest[l] != '\0'; l++)
	{
		m++;
	}
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[m] = src[n];
		m++;
	}
	return (dest);
}
