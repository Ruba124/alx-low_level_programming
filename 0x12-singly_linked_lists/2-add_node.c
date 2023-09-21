#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - function
 * @head:para
 * @str:para2
 * Return:list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *m;
	unsigned int l; 

	for (l = 0; *str; l++)
		;
	m = malloc(sizeof(list_t));
	if (!m)
		return (NULL);
	m->str = strdup(str);
	m->len = l;
	m->next = (*head);
	(*head) = new;
	return (*head);
}
