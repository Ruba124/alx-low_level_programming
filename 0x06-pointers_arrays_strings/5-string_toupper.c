#include "main.h"
/**
 * string_toupper - function
 * @s:string
 * Return:string
 */
char *string_toupper(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (s[l] >= 97 && s[l] <= 122)
		{
			s[l] += 32;
		}
	}
	return (s);
}
