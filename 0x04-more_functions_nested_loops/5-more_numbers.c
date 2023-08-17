#include "main.h"
/**
 * more_numbers-function
 * Return: no
 */
void more_numbers(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			c = b;
			if (c > 9)
			{
				_putchar (49);
				c = b % 10;
			}
				_putchar (c + 48);
		}
	_putchar ('\n');
	}
}
