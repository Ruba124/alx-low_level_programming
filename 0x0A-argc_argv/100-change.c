#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc:int
 * @argv:array
 * Return:0
 */
int main(int argc, char **argv)
{
	int fug = 0;
	int hal, ake, abu, isa, mit;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	hal = atoi(argv[1]);
	if (hal >= 25)
	fug = hal / 25;
	ake = hal % 25;
	if (ake >= 10)
	fug += ake / 10;
	abu = ake % 10;
	if (abu >= 5)
	fug += abu / 5;
	isa = abu % 5;
	if (isa >= 2)
	fug += isa / 2;
	mit = isa % 2;
	if (mit == 1)
	{
		fug += 1;
	}
	printf("%d\n", fug);
	return (0);
}


