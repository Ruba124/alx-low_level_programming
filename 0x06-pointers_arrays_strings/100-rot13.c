#include "main.h"
/**
 * rot13- function
 * @s:string
 * Return:string
 */
char *rot13(char *s)
{
	int t;

	for (t = 0; s[t] != '\0'; t++)
	{
		if (s[t] >= 65 && s[t] <= 78)
		{	s[t] += 13; }
		if (s[t] >= 97 && s[t] <= 110)
		{	s[t] += 13; }
		if (s[t] > 78 && s[t] <= 90)
		{	s[t] -= 13; }
		if (s[t] > 110 && s[t] <= 122)
		{	s[t] -= 13; }
	}
	return (s);
}
