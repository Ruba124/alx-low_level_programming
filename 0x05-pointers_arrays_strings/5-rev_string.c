#include "main.h"
/**
 * rev_string - function
 * @s:parameter
 */
void rev_string(char *s)
{
	int a = -1;
	int z;
	char t;

	while (*s != '\0')
	{
		++a;
		s++;
	}
	
	for(z = 0; z < a / 2; z++)
	{
		t = s[z];
		s[z] = s[a - z];
		s[a - z] = t;
	}
}
