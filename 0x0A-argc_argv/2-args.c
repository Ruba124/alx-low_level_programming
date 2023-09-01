#include <stdio.h>
/**
 * main - function
 * @argc:int
 * @argv:array
 * Return:0
 */
int main(int argc, char **argv)
{
	int t;

	for (t = 0; t < argc; t++)
	{
		printf("%s", argv[t]);
		printf("\n");
	}
	return (0);
}
