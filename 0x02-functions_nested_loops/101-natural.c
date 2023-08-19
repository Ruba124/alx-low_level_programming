#include <stdio.h>
/**
 * main -entry point
 * Return: always0
 */
void main(void)
{
	int a;
	int s = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 5 == 0 || a % 3 == 0)
			s += a;
	}
	printf("%d", s);
	putchar ('\n');
}
