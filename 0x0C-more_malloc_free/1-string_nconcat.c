#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function
 * @s1:char
 * @s2:char
 * @n:number
 * Return:new char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int y = 0;
	unsigned int k = 0;
	unsigned int l;
	unsigned int c = 0;
	unsigned int g = 0;
	char *u;

	if (*s1 != '\0')
	{
		for (; s1[y] != '\0'; y++)
			;
	}
	if (*s2 != '\0')
	{
		for (; s2[k] != '\0'; k++)
			;
	}
	if (n < k)
	{	l = y + n; }
	else
	{	l = y + k; }
	u = malloc(l + 1);
	if (!u)
	{	return (NULL); }
	while (c < y)
	{
		u[c] = s1[c];
		c++;
	}
	while (c < l)
	{
		u[c] = s2[g];
		c++;
		g++;
	}
	u[c] = '\0';
	return (u);
}
