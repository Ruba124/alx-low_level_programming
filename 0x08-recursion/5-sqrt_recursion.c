#include "main.h"
/**
 * _sqrt_recursion - function
 * @n:int
 * @v:int2
 * Return:sq
 */
int sq(int n, int v);

int _sqrt_recursion(int n)
{ return (_sq(n, 1)); }
/**
 * sq - function
 * @v:value
 * @n:int2
 * Return:sq
 */

int sq(int n, int v)
{
	if ((v * v) == n)
	{	return (v); }
	else if (v * v < n)
	{	return (_sq(n, v + 1)); }
	else
		return (-1);
}


