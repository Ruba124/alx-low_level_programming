#include "main.h"
/**
 * print_to_98 -prints to 98
 * @n: parameter
 * Return:no return
 */
void print_to_98(int n)
{
	int a = n;
	int l;

	if (a == 98)
{
	printf("%d", a);
	putchar('\n');
}
	if (a > 98)
{
	for (l = 98; l <= a; a--)
{
	printf("%d", a);

	if (a == 98)
{	continue; }
	putchar (',');
	putchar (32);
}
	putchar('\n');
}
	if (a < 98)
{
	for (l = 98; a <= l; a++)
{
	printf("%d", a);
	if (a == 98)
{	continue; }
	putchar(',');
	putchar(32);
}
	putchar('\n');
}
}
