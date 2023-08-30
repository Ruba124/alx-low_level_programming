#include "main.h"
/**
 * factorial - function
 * @n:int
 * Return:factotial
 */
int factorial(int n)
{
	if (n < 0)
	{ return (-1); }
	if (n <= 1)
	{ return (1) ; }
	return (n * factorial(n - 1));
}
