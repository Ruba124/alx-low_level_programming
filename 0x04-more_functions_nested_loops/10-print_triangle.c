#include "main.h"
/**
 * print_triangle-function
 * @size:size
 * Return:no
 */
void print_triangle(int size)
{
	int a, b, c, g;

	g = size - 1;

	for (a = 1; a <= size; a++)
	{
		if (size <= 0)
		{	break; }
		for (b = g; b >= 1; b--)
		{
			_putchar (32);
		}
		for (c = 1; c <= a; c++)
		{
			_putchar (35);
		}
		g--;
		_putchar ('\n');
	}
	if (size <= 0)
	{	_putchar ('\n'); }
}
