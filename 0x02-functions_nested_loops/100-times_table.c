#include "main.h"
/**
 * print_times_table - from the name
 * @n:number
 * Return:no
 */
void print_times_table(int n)
{
	int a = n;
	int b;

	if ((a >= 0) && (a <= 15))
{
	for (a = 0; a <= n; a++)
{
	for (b = 0; b <= n; b++)
{
	printf("%3d,", a*b);
}
}
}
}
