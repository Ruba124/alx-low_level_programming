#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - function
 * @head:para
 * @n:para
 * Return:add
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k;

	k = malloc(sizeof(listint_t));

	if (k == NULL)
	{
		return (NULL);
	}
	k->n = n;
	k->next = *head;
	*head = k;
	return (k);
}

