#include "main.h"
/**
 * print_square-prints square
 * @size:size
 * Return:no
 */
void print_square(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		if (size <= 0)
		{	break; }
		for (b = 1; b <= size; b++)
		{
			_putchar (35);
		}
		_putchar ('\n');
	}
	if (size <= 0)
	{	_putchar ('\n'); }
}
