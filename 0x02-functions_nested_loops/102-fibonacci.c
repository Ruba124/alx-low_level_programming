#include <stdio.h>
#include "main.h"
/**
 * main-prints fibo
 * Return:0
 */
int main(void)
{
	int c;
	int f1 = 0;
	int f2 = 1;
	int sum;

	for (c = 0; c < 50; c++)
	{
		sum = f1 + f2;
		printf("%d", sum);
		f1 = f2;
		f2 = sum;
		if (c == 49)
		{ _putchar('\n'); }
		else
		{ printf(", "); }
	}
	return (0);
}

