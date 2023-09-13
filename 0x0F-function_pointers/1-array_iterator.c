#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - funtion
 * @array:para
 * @size:type
 * @action:para
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int l;
	if (!array || !action)
	{	return; }

	for (l = 0; l < size; l++)
	{
		action(array[l]);
	}
}
