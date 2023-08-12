#include <stdio.h>
/**
 * main -prints all possibl combinations pf 3 digits
 * Return:always 0;
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a <= 56; a++)
{
	for (b = (a + 1); b <= 57; b++)
{
	for (c = (b + 1); c <= 57; c++)
{
	putchar(a);
	putchar(b);
	putchar(c);
	if ((a == 55) && (b == 56) && (c == 57))
{
	continue;
}
	putchar(',');
	putchar(32);
}
}
}
	putchar('\n');
	return (0);
}
