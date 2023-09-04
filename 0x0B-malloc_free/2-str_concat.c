#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function
 * @s1:string 1
 * @s2:string 2
 * Return:sum
 */
char *str_concat(char *s1, char *s2)
{
	int y = 0;
	int a = 0;
	int m = 0;
	int L = 0;
	int S;
	char *r;

	if (s1 != NULL)
	{
		for (; s1[m] != '\0'; m++)
			;
	}
	if (s2 != NULL)
	{
	
		for (; s2[L] != '\0'; L++)
			;
	}
	S = m + L + 1;
	r = malloc(sizeof(char) * S);
	if (r == NULL)
	{	return (NULL); }
	if (s1)
	{
		while (y < m)
		{
			r[y] = s1[y];
			y++;
		}
	}
	if (s2)
	{
		while (a < L)
		{
			r[y] = s2[a];
			y++;
			a++;
		}
	}
	r[y] = '\0';
	return (r);
}
