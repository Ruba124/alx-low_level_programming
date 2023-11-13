#include "main.h"
/**
 * _strcmp - functoin
 * @s1:string 1
 * @s2:string 2
 * Return:1 - 0
 */
int _strcmp(char *s1, char *s2)
{
	int l;
	int m = 0;
	int k;

	for (m = 0; s1[m] == s2[m] && s1[m] != '\0' && s2[m] != '\0'; m++)
		;
	if (s1[m] > s2[m])
	{
	l = s1[m] - s2[m];
	return (l);
	}
	else
	{
	k = s2[m] - s1[m];
	return (-k);
	}
	return (0);
}
