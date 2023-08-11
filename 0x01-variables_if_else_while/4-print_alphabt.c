#include <stdio.h>
/**
 * main -prints lower case letters
 * Returns: always 0
 */
int main(void)
{
	int r;

	for (r = 97; r <= 122; r++)
{
	if ((r == 113) || (r == 101))
{
	continue;
}
	putchar(r); }
	putchar('\n');
	return (0);
}
