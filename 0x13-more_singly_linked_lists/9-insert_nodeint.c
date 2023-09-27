#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function
 * @head:para
 * @idx:para2
 * @n:para3
 * Return:para
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h;
	listint_t *a = *head;
	unsigned int y;

	h = malloc((sizeof(listint_t)));

	if (!h || !head)
	{	return (NULL); }
	h->n = n;
	h->next = NULL;
	if (idx == 0)
	{
		h->next = *head;
		*head = h;
		return (h);
	}
	for (y = 0; a && y < idx; y++)
	{
		if (y == idx - 1)
		{
			h->next = a->next;
			a->next = h;
			return (h);
		}
		else
			a = a->next;
	}

	return (NULL);
}
