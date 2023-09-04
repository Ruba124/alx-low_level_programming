#include "main.h"
/**
 * create_array - function
 * @size:int
 * @c:char
 * Return:0
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *y;

	if (size == 0)
	{	 return ('\0'); }
	y = (char *) malloc (sizeof (char)* size);
	if (y == '\0')
	{	return (0); }
	while (i < size)
	{
		y[i] = c;
		i++;
	}
	y[i] = '\0';
	return (y);
}

