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
	_putchar (43);
	return (1);
}
	else if (m < 0)
{
	_putchar (45);
	return (-1);
}
	else if (m == 0)
{
	_putchar (48);
	return (0);
}
	return (0);
}
