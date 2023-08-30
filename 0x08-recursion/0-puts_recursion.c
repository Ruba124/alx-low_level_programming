#include "main.h"
/**
 * _puts_recursion - function
 * @s:string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{ _putchar('\n'); }
	else
	{
		_putchar(*s);
		__puts_recursion(s + 1);
	}
}
