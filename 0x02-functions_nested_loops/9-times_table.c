#include "main.h"
/**
 * times_table -prints 9 tables
 * Return: no return
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
{
	if (b == 0)
{	printf("0"); }
	else
{
	printf("%3d", a * b);
}
	if (b == 9)
{	continue; }
	putchar(',');
}
	putchar('\n');
}
}
