#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - function
 * @h:para
 * Return:len
 */
size_t list_len(const list_t *h)
{
	size_t y;

	for (y = 0; h; y++)
		h = h->next;
	return (y);
}
