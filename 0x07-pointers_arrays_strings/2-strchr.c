#include "main.h"
/**
 * _strchr - function
 * @s:string
 * @c:char
 * Return:pointer
 */
char *_strchr(char *s, char c)
{
	int g;

	for (g = 0; s[g] >= '\0'; g++)
	{
		if (s[g] == c)
		{
			return (s + g);
		}
	}
	return ('\0');
}
