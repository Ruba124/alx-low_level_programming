#include "main.h"
/**
 * _strstr - function
 * @haystack:string
 * @needle:string2
 * Return:pointer to the substring
 */
char *_strstr(char *haystack, char *needle)
{
	int m, u;

	for (m = 0; haystack[m] != '\0'; m++)
	{
		int k = m;
		char *t = haystack;
		char *a = needle;
		for (u = 0; t[k] == a[u] && a[u] != '\0'; u++)
		{
	  		k++;		
		}
		if (a[u] == '\0')
		{
			return (haystack + m);
		}
	}
	return('\0');
}

