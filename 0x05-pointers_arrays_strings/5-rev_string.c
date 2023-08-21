#include "main.h"
/**
 * rev_string - function
 * @s:parameter
 */
void rev_string(char *s)
{
	int a = -1;
	int z = 0;
	char t;

	while (*s != '\0')
	{
		++a;
		s++;
	}
	
	while (z < (a / 2))
	{
		t = s[z];
		s[z] = s[a - z];
		s[a - z] = t;
		z++;
	}
}
