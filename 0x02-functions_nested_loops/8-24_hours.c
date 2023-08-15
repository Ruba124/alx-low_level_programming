#include "main.h"
/**
 * jack_bauer -prints his hours
 * Return: no return value
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
{
	if ((a == 2) && (b == 4))
{	continue; }
	for (b = 0; b <= 9; b++)
{
	for (c = 0; c <= 5; c++)
{
	for (d = 0; d <= 9; d++)
{
	printf("%d", a);
	printf("%d", b);
	putchar(':');
	printf("%d", c);
	printf("%d\n", d);
}
}
}
}
}
