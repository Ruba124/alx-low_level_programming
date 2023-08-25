#include "main.h"
/**
 * print_number - fun
 * @n: int
*/
void print_number(int n)
{
	unsigned int l = n;

	if (n < 0)
	{
		_putchar ('-');
		l = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar (n % 10 - '0');
}
