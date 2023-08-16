#include "main.h"
/**
 * print_sign-prints sign
 * @n:the number
 * Return:1 -0 -1
 */
int print_sign(int n)
{
	int m = n;

	if (m > 0)
{
	printf("+");
	return (1);
}
	else if (m < 0)
{
	printf("-");
	return (-1);
}
	else if (m == 0)
{
	printf("0");
	return (0);
}
}
