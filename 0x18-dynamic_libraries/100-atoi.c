#include "main.h"
/**
 * _atoi - function
 * Return:number
 * @s:parameter
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int m = 1;

	do {
		if (*s == '-')
			m *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	return (n * m);
}
