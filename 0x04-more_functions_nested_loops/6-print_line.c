#include "main.h"
/**
 * print_line-from the name
 * @n:the length
 * Return:no
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n <= 0)
		{
			_putchar ('\n');
			break;
		}
		else
			_putchar ('_');
	}
	_putchar ('\n');
}
