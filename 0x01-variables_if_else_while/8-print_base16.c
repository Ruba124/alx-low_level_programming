#include <stdio.h>
/**
 * main -entry point .prints 012345xyz
 * Return: always 0
 */
int main(void)
{
	int t;

	for (t = 48; t <= 102; t++)
{
	if ((t > 57) && (t < 97))
{
	continue;
}
	putchar (t);
}
	putchar ('\n');
	return (0);
}
