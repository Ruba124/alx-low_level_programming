#include "function_pointers.h"
/**
 * int_index - function
 * @array:para
 * @size:para2
 * @cmp:sihhh
 * Return:int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int l, k;

	if (size <= 0)
	{	return (-1); }
	if (!array && !cmp)
	{	return (-1); }
	for (l = 0; l < size; l++)
	{
		k = cmp(array[l]);
		if (k != 0)
		{	return (l); }
	}
	return (-1);
}
