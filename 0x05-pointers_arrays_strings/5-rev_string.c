#include "main.h"
/**
 * rev_string - function
 * @s:parameter
 */
void rev_string(char *s)
{
	int a;
	int z;
	char t;

	for (a = 1; s[a] != '\0'; ++a)
		;

	for (z = 0; z < a / 2; z++)
	{
		t = s[a];
		s[z] = s[a - 1 - z];
		s[a - 1 - z] = t;
	}
}
