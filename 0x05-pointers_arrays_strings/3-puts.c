#include "main.h"
/**
 * _puts- function
 * @str:parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
