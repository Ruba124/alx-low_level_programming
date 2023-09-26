#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - function
 * @head:para
 */
void free_listint(listint_t *head)
{
	listint_t *h;

	if (!head)
	{
		return;
	}
	while (head)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
