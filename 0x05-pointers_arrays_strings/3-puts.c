#include "main.h"
/**
 * _puts- function
 * @str:parameter
 */
void _puts(char *str)
{
	int l;

	for (l = 0; *str != '\0'; str++)
	{
		printf("%c", str);
	}
	putchar('\n');
}
