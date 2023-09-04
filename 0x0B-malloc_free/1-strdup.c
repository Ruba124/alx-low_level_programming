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

	for (m = 0; str[m] != '\0'; m++)
		;
	m++;
	p = malloc(sizeof(char) * m);
	while (i < m)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}

