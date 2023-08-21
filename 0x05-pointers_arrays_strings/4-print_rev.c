#include "main.h"
/**
 * print_rev - function
 * @s:parameter
 */
void print_rev(char *s)
{
	int l = -1;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	while (l >= 0)
	{
		_putchar(*s[l] + 0);
		l--;
	}
}
