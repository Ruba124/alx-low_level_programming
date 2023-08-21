#include "main.h"
#include <stdio.h>
/**
 * print_array - function
 * @a:para
 * @n:second
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);
		if (n == l + 1)
		{	continue; }
		printf(", ");
	}
	_putchar ('\n');
}
