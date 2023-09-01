#include "main.h"
/**
 * _memset - function
 * @s:char
 * @b:L
 * @n:number
 * Return:string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int c;

	for (c = 0; n > 0; n--)
	{
		s[c] = b;
		c++;
	}
	return (s);
}
