#include "main.h"
/**
 * _sqrt_recursion - function
 * @n:int
 * Return:sq
 */
int _sq(int n, int v);
/**
 * _sq - function
 * @v:value
 * Return:int
 */

int _sqrt_recursion(int n)
{ return (_sq(n, 1)); }

int _sq(int n, int v)
{
	if ((v * v) == n)
	{	return (v); }
	else if (v * v < n)
	{	return (_sq(n, v + 1)); }
}


