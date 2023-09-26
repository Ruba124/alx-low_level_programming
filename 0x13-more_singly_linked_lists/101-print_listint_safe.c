#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - function
 * @head:para
 * Return:num
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *t = NULL;
	listint_t *o = NULL;
	size_t A = 0;
	size_t B;

	t = head;
	while (t)
	{
		printf("[%p] %d\n", (void *)t, t->n);
		A++;
		t = t->next;
		o = head;
		for (B = 0; B < A; B++)
		{
			if (t == o)
			{
				printf("-> [%p] %d\n", (void *)t, t->n);
				return (A);
			}
			o = o->next;
		}
		if (!head)
		{	 exit (98); }
	}
	return (A);
}


