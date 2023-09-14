#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function
 * @n:para
 * Return:int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int o;
	unsigned int l = 0;
	va_list try;
	va_start(try, n);

	if (n == 0)
	{	return (0); }
	for (o = 0; o < n; o++)
	{
		l += va_arg(try, unsigned int);
	}
	return (l);
}


