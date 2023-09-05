#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function
 * @ac:int
 * @av:ar
 * Return:array
 */
char *argstostr(int ac, char **av)
{
	int a, b,c,d;
	char *r;

	a = 0;
	b = 0;
	if (ac == 0 || av == NULL)
	{	return (NULL); }
	for (c = 0; c < ac; c++)
	{
		d = 0;
		while (**av)
		{
			d++;
			a++;
		}
		d++;
		c++;
	}
	r = malloc((sizeof(char) * size) + 1);
	if (r == NULL)
		return (NULL);
	for (c = 0; c < ac; c++)
	{
		d = 0;
		while(**av)
		{
			r[b] = av[c][d];
			d++;
			b++;
		}
		r[b] = '\n';
		c++;
		b++;
	}
	r[b] = '\0';
	return(r);
}

