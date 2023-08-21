#include "main.h"
/**
 * puts_half - function
 * @str:para
 */
void puts_half(char *str)
{
	int l = 0;
	int n = 0;
	int s = 0;
	int m, j;

	while (str[l] != '\0')
	l++;

	if (l % 2 == 0)
	{
		m = l / 2;
		while (str[n] != '\0')
		{
			if (n >= m)
			{
			_putchar (str[n]);
			}
			n++;
		}
		_putchar ('\n');
	}
	else
	{
		j = (l - 1) / 2;
		while (str[s] != '\0')
		{
			if (s > j)
			{
			_putchar (str[s]);
			}
			s++;
		}
		_putchar ('\n');
	}
}
