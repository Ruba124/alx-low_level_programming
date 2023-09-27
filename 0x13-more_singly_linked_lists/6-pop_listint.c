#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function
 * @head:list
 * Return:n
 */
int pop_listint(listint_t **head)
{
	int a;
	listint_t *no;

	if (!head || !*head)
		return (0);

	no = (*head)->next;
	a = (*head)->n;
	free(*head);
	(*head) = no;
	return (a);
}
