#include "main.h"
/**
 * rev_string - function
 * @s:parameter
 */
void rev_string(char *s)
{
	int a = 0;
	int z = 0;
	char t;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	a--;
	while (z > a)
	{
		t = s[z];
		s[z] = s[a - z];
		s[a - z] = t;
		z++;
	}
