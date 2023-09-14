#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function
 * @format:int
 */
void print_all(const char * const format, ...)
{
	int l = 0;
	char *r;
	char *e = "";

	va_list k;
	va_start(k, format);

	if(format)
	{
		while (format[l])
		{
			switch(format[l])
			{
				case 'c':printf("%s%c", e, va_arg(k, int));
					break;
				case 'i':printf("%s%d", e, va_arg(k, int));
					 break;
				case 'f':printf("%s%f", e, va_arg(k, double));
					 break;
				case 's':
					 r = va_arg(k, char *);
					 if(!r)
						 r = "(nil)";
					 printf("%s%s", e, r);
					 break;
				default:
					 l++;
					 continue;
			}
			e = ", ";
			l++;
		}
	}
	printf("\n");
}

