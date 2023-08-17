#include "main.h"
/**
 * print_diagonal-function
 * @n:length
 * Return:no
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		if (n <= 0)
		{
			_putchar ('\n');
			break;
		}
		for (b = 0; b <= a; b++)
		{
			_putchar (32);
		}
		_putchar (92);
		_putchar ('\n');
	}
}


