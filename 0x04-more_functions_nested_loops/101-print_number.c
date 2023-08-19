#include "main.h"
/**
 * print_number- prints num
 * @n:int
 * Return:no
 */
void print_number(int n)
{
	unsigned int l = n;

	if (n < 0)
	{
		_putchar(-);
		l = -l;
	}
	if ((l / 10) > 0)
		print_number(l / 10);
	_putchar((l % 10) + 48);
}

