#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function
 * @head:para
 * @n:para
 * Return:add
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ny;
	listint_t *k = *head;

	if (!head || !*head)
	{	 return (NULL); }
	ny = malloc(sizeof(listint_t));

	if (!ny)
	{	return (NULL); }
	ny->n = n;
	ny->next = NULL;
	if (*head == NULL)
	{
		*head = ny;
		return (ny);
	}
	while (k->next)
	{	k = k->next; }
	k->next = ny;
	return (k);
}
