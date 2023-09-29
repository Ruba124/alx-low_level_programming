#include<stdio.h>
#include "main.h"
/**
 * binary_to_uint - functio
 * Return:ll
 * @b:int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int you;

	if (!b)
	{
		return (0);
	}
	for (you = 0; *b;)
	{
		if (*b != '0' && *b != '1')
			return (0);
		you = you * 2 + (*b++ - '0');
	}
	return (you);
}

