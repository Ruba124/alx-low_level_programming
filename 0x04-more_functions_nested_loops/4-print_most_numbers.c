#include "main.h"
/**
 * print_most_numbers-no 2 4
 * Return: no
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if ((a == 50) || (a == 52))
			continue;
		_putchar (a);
	}
	_putchar ('\n');
}
