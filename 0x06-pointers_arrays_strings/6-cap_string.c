#include "main.h"
/**
 * cap_string - function
 * @s:string
 * Return:string
 */
char *cap_string(char *s)
{
	char *c = s;
	int m = 0;

	while (*s)
	{
		if (*s == 32 || *s == '\n' || *s == '\t' || *s == 40)
		{
			s[m + 1] -= 32;
		}
		m++;
		s++;
	}
	
