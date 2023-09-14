#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function
 * @separator:first
 * @n:para
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int o;
	va_list k;
	va_start(k, n);

	for (o = 0; o < n; o++)
	{
		if (!separator)
		{	printf("%d", va_arg(k, unsigned int)); }
		else if (o == 0)
		{	 printf("%d", va_arg(k, unsigned int)); }
		else
		{	printf("%s%d", separator, va_arg(k, unsigned int)); }
	}

	printf("\n");
}
