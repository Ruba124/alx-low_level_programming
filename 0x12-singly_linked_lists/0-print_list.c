#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *  print_list - function
 *  @h:para
 *  Return:size
 */
size_t print_list(const list_t *h)
{
	size_t l;

	for (l = 0; h; l++)
	{
		if (!h->str)
		{	printf("[0] (nil)\n"); }
		else
		{	printf("[%d] %s\n", h->len, h->str); }
		h = h->next;
	}
	return (l);
}
