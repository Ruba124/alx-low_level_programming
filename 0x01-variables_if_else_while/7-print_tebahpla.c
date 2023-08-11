#include <stdio.h>
/**
 * main -prints zyx....cba
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
	{ putchar(a); }
	putchar('\n');
	return (0);
}
