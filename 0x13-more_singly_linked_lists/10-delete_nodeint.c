#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index  - function
 * @head:para
 * @index:para2
 * Return:num
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h = *head;
	listint_t *ct = NULL;
	unsigned int g;

	if (*head == NULL)
	{	return (-1); }
	if (index == 0)
	{
		*head = (*head)->next;
		free(h);
		return (1);
	}
	for (g = 1; g < index ; g++)
	{
		if (!h || !(h->next))
		{	return (-1); }
		h = h->next;
		g++;
	}
	ct = h->next;
	h->next = ct->next;
	free(ct);
	return (1);
}
