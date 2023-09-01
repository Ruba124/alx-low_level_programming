#include "main.h"
/**
 * _strspn - function
 * @s:string
 * @accept:string2
 * Return:length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int fi, se;

	for (fi = 0; s[fi] != '\0'; fi++)
	{
		for (se = 0; s[fi] != accept[se]; se++)
		{
			if (accept[se] == '\0')
			{	return (fi); }
		}
	}
	return (fi);
}

