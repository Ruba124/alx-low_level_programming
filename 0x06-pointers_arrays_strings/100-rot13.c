#include "main.h"
/**
 * rot13- function
 * @s:string
 * Return:string
 */
char *rot13(char *s)
{
	char *S = s;
	char l[] = "abcdefghijklmnopqrstuvwxwzABCDEFGHIJKLMNOPQRSTUVWXWZ"
	char f[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXWZABCDEFGHIJKLM"

	while (*s)
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == l[i])
			{
			*s = f[i];
			break;
			}
		}
		s++;
	}
	return (S);
}
