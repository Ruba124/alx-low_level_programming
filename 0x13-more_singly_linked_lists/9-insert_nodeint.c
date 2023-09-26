#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_inde - function
 * @head:para
 * @idx:para2
 * @n:para3
 * Return:para
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h;
	unsigned int y;

	if (!*head || !head || !idx || !n)
	{	return (NULL); }
	h = *head;
	for (y = 0;*head && y < idx; y++)
	{
		h = (*head)->next;
	}
	n = (*head)->n;
	return(h);
}


