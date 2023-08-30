#include "main.h"
/**
 * _strlen_recursion - function
 * @s:string
 * Return:length
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (l > '\0')
	{
		l += (_strlen_recursion(s + 1) + 1);
	}
	return (l);
}
