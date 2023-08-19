#include "main.h"
#include <stdio.h>
/**
 * _sq - find the square root
 * @s:int
 * Return:the square root
 */
double _sq(double s)
{
	float q, r;

	q = s / 2;
	r = 0;

	while (q != r)
	{
		r = q;
		q = (s / r + r) / 2;
	}
	return (q);
}
/**
 * _LPF- finds the largest prime factor
 *  @n:num
 */
void _LPF(long int n)
{
	int p, l;

	while (n % 2 == 0)
	{	n = n / 2; }
	for (p = 3; p <= _sq(n); p += 2)
	{
		while (n % p == 0)
		{
			n = n / p;
			l = p;
		}
	}
	if (n > 2)
		l = n;
		printf("%d\n", l);
}
/**
 * main- entry point
 * Return: always 0
 */
int main(void)
{
	_LPF(612852475143);

	return (0);
}

