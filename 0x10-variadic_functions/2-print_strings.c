#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function
 * @separator:para
 * @n:para2
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int l;
	char *r;
	va_list s;
	va_start (s, n);

	for (l = 0; l < n; l++)
	{
		r = va_arg(s, char *);
		if (!r)
		{	r = "(nil)"; }
		if(!separator)
		{	printf("%s,%c",r,' '); }
		else if(l == 0)
			 printf("%s",r);
		else
			printf("%s%c%s", separator, ' ', r);

	}
	printf("\n");
}
			
			
