#include "main.h"
#include <stdio.h>
/**
 * print_array - function
 * @a:para
 * @n:second
 */
void print_array(int *a, int n)
{
	int l = 0;

	while (a[l] != '\0')
	{
		if (l == n)
		{	break; }
		printf("%d", a[l]);
		if (n == l + 1)
		{	break; }
		_putchar (32);
		_putchar(',');
		l++;
	}
	_putchar ('\n');
}
