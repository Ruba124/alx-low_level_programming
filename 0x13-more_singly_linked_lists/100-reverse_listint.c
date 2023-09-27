#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - function
 * @head:para
 * Return:ind
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL;
	listint_t *b = NULL;

	while (*head)
	{
		b = (*head)->next;
		(*head)->next = a;
		b = *head;
		*head = a;
	}
	*head = b;
	return (*head);
}

