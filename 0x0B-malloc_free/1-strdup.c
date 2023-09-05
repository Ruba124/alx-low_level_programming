#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function
 * @str:char
 * Return:char
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int m;

	if (str == NULL)
		return (NULL);
	for (m = 0; str[m] != '\0'; m++)
		;
	m++;
	p = malloc(sizeof(char) * m);
	if (p == 0)
		return (0);
	while (i < m)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}

