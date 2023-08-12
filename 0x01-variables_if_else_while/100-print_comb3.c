#include <stdio.h>
/**
 * main-prints all possible combinatoins of 2 digits
 * Return: always 0
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
{
	for (b = (a + 1); b <= 57; b++)
{
	putchar(a);
	putchar(b);
	if ((a == 56) && (b == 57))
{
	continue;
}
	putchar (',');
	putchar (32);
}}
	putchar ('\n');
	return (0);
}
