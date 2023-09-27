#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function
 * @head:para
 */
void free_listint2(listint_t **head)
{
	listint_t *y;
	listint_t *z;

	if (head == NULL)
		return;
	y = (*head);
	while (y)
	{
		z = y;
		y = y->next;
		free(z);
	}
	*head = NULL;
}
