#include "main.h"
/**
 * print_last_digit - from the name
 * @l:parameter
 * Return:always 0
 */
int print_last_digit(int l)
{
	int a = l;
	int m;

	if (a < 0)
{	m = -1 * (a % 10); }
	else 
{	m = (a % 10); }
	putchar(m + '0');
	return (m);
}
