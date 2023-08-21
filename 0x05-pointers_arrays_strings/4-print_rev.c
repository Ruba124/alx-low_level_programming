#include "main.h"
/**
 * print_rev - function
 * @s:parameter
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	while (l >= 0)
	{
		_putchar(*s);
		s--;
		l--;
	}
	_putchar('\n');
}
