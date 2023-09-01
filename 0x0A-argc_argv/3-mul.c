#include <stdio.h>
#include "main.h"
/**
 * main - function
 * @argc:int
 * @argv:array
 * Return:0
 */
int main(int argc, char **argv)
{
	int j;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	j = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%d\n", j);
	return (0);
}


