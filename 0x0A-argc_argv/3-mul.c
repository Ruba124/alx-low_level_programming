#include <stdio.h>
/**
 * _atoi - function
 * @s:int
 * Return:int
 */
int _atoi(char *s);
int _atoi(char *s)
{
	unsigned int n = 0;
	int m = 1;

	do {
		if (*s == '-')
			m *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');
		else if (n > 0)
			break;
	} while (*s++);
	return (n * m);
}
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


