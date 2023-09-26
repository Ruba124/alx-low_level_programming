#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function
 * @h:para
 * Return:size
 */
size_t listint_len(const listint_t *h)
{
	size_t a;

	for (a = 1; h; a++)
	{
		h = h->next;
	}
	return (a);
}


