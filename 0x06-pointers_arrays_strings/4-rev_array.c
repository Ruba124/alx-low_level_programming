#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function
 * @a:int
 * @n:int2
 */
void reverse_array(int *a, int n)
{
	int o = n - 1;

	while (o >= 0)
	{
		if (o != 0)
		{ printf(", "); }
		printf("%d", a[o]);
		o--;
	}
	printf("\n");
}
