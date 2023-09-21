#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - function
 * @head:para
 * @str:para2
 * Return:add
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *k;
	list_t *y = *head;
	unsigned int j;

	for (j = 0; str[j]; j++)
		;
	k = malloc(sizeof(list_t));
	if(!k)
	{	return (NULL); }
	k->str = strdup(str);
	k->len = j;
	k->next = NULL;
	if (*head == NULL)
	{
	(*head) = k; 
	return (k);
	}
	while(y->next)
		y = y->next;
	y->next = k;
	return (k);
}
