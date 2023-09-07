#include "main.h"
#include <stdlib.h>
/**
 * array_range - function
 * @min:int
 * @max:int
 * Return:int
 */
int *array_range(int min, int max)
{
	int l, n;
	int *j;

	if (min > max)
	{	return (NULL); }
	l = max - min;
	l += 1;
	j = malloc(sizeof(int) * l);
	if (!j)
	{	return (NULL); }
	for (n = 0; n <= l; n++)
	{
		j[n] = min;
		min += 1;
	}
	return (j);
}
