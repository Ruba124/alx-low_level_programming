#include <stdio.h>
/**
 * main -prints 0123456789...z
 * Return: always 0
 */
int main(void)
{
	char a;

	for (a = 48; a <= 57; a++)
	{ putchar(a); }
	return (0);
}