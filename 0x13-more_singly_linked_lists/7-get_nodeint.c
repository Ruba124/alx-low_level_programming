#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function
 * @head:para
 * @index:para2
 * Return:n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *my;
	unsigned int s;

	my = head;
	for (s = 0; my && s < index; s++)
	{
		my = my->next;
	}
	return (my);
}
		

