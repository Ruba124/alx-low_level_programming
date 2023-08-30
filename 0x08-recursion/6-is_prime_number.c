#include "main.h"
/**
 * is_prime_number - function
 * @n:int
 * @v:value
 * Return:v
 */
int check(int n, int v);
int is_prime_number(int n)
{
	return (check(n, 2));
}
/**
 * check - function
 * @n:int
 * @v:int
 * Return:0 1
 */
int check(int n, int v)
{
	if (v >= n && n > 1)
	{       return (1); }
	else if (n % v == 0 || n <= 1)
	{	return(0); }
	else
		return (check(n, v + 1));
}
