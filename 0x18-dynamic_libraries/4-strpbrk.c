#include "main.h"
/**
 * _strpbrk - ffunction
 * @s:string
 * @accept:string 2
 * Return:first matching char
 */
char *_strpbrk(char *s, char *accept)
{
	int m, u;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (u = 0; accept[u] != '\0'; u++)
		{
			if (s[m] == accept[u])
			{
				return (s + m);
			}
		}
	}
	return ('\0');
}
