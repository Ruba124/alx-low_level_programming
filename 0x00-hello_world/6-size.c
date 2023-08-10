#include <stdio.h>

/**
 * main - prints the sizes ,of dif
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %lu", sizeof(char));
	printf(" byte(s)\n");
	printf("Size of an int: %lu", sizeof(int));
	printf(" byte(s)\n");
	printf("Size of a long int: %lu", sizeof(long int));
	printf(" byte(s)\n");
	printf("Size of a long long int: %lu", sizeof(long long));
	printf(" byte(s)\n");
	printf("Size of a float: %lu", sizeof(float));
	printf(" byte(s)\n");
	return (0);
}
