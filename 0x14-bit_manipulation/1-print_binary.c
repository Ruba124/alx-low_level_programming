#include <stdio.h>
#include "main.h"
/**
 * print_binary - function
 * @n:pp
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8;
	int num = 0;

	for (; size;)
	{
		if (n & 1l << --size)
		{
			_putchar('1');
			num += 1;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
