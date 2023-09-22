#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function
 * @head:para
 */
void free_list(list_t *head)
{
	list_t *y;

	while(head)
	{
		y = head;
		free(head->str);
		free(y);
		head = head->next;
	}
}

