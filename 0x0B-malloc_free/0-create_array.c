#include "main.h"
#include <stdlib.h>
/**
 * create_array - function
 * @size:int
 * @c:char
 * Return:0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *y;

	if (size == 0)
	{	 return ('\0'); }
	y = malloc(sizeof(char) * size);
	if (y == NULL)
	{	return (0); }
	while (i < size)
	{
		y[i] = c;
		i++;
	}
	y[i] = '\0';
	return (y);
}

