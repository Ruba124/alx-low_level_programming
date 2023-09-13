#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - function
 * @argc:para
 * @argv:para
 * Return:int
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int cal = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	cal = (get_op_func(argv[2])(num1, num2));
	printf("%d\n", cal);
	return (0);
}
