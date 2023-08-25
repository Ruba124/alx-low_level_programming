#include "main.h"
/**
 * dele - function
 * @m:char
 * Return: 0-
 */
int dele(char m)
{
	int f;
	char d[] = " \t\n,;.!?\"(){}";

	for (f = 0; f < 12; f++)
		{
		if (m == d[f])
			return (1);
		}
	return (0);
}
/**
 * low - fun
 * @w:int
 * Return:0 - 1
 */

int low(char w)
{
	return (w >= 97 && w <= 122);
}
/**
 * cap_string - function
 * @s:string
 * Return:string
 */

char *cap_string(char *s)
{
	char *b = s;
	int fl = 1;

	while (*s)
{
	if (dele(*s))
	{	fl = 1; }
	else if (low(*s) && fl)
	{
		*s -= 32;
		fl = 0;
	}
	else
		fl = 0;
	s++;
}
	return (b);
}
