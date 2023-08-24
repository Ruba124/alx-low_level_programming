#include "main.h"
/**
 * leet - 1337
 * @c:char
 * Return:char
 */
char *leet(char *c)
{
	int i;
	char L[] = {'A', 'E', 'O', 'T', 'L'};
	int v[] = {4, 3, 0, 7, 1};

	while (*c)
	{
		for (i = 0; i < 5; i++)
		{
			if (*c == l[i] || *c == l[i] + 32)
			{
				*c = 48 + v[i];
			}
		}
		c++;
	}
	return (c);
}
