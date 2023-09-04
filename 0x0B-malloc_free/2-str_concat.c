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
	int m, L, S;
	char *r;

	for (m = 0; s1[m] != '\0'; m++)
		;
	for (L = 0; s2[L] != '\0'; L++)
		;
	S = m + L + 1;
	r = malloc(sizeof(char) * S);
	if (r == NULL)
	{	return (NULL); }
	if(s1)
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
