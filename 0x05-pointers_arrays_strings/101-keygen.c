#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int s;
	char k;

	strand(time(NULL));
	while (s <= 2645)
	{
		k = rand() % 128;
		s += k;
		putchar (k);
	}
	putchar (2772 - sum);
	return (0);
}
