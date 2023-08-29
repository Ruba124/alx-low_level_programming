#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function
 * @a:in
 * @size:size
 * Return:no
 */
void print_diagsums(int *a, int size)
{
	int b, c, d;

	for (b = 0; b < size; b++)
	{
		c += a[b];
		d += a[size - b - 1];
		a += size;
	}
	printf("%d, \n", c);
	printf("%d", d);
}
