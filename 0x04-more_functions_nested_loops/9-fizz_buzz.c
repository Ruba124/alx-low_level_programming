#include <stdio.h>
/**
 * main- entry point
 * Return:always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			if (a % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Fizz");
			}
		}
		if (a % 5 == 0 && a % 3 != 0)
		{
			printf("Buzz");
		}
		if (a % 3 != 0 && a % 5 != 0 && a % 15 != 0)
		{
			printf("%d", a);
		}
		if (a == 100)
		{	continue; }
		putchar (32);
	}
	putchar ('\n');
	return (0);
}
