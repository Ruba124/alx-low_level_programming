#include <stdio.h>
/**
 * main -0  ., 2 3 ,  9
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{putchar(32);
	putchar(a);
	putchar(','); }
	putchar('\n');
	return (0);
}
