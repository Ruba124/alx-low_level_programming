#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - function
 * @s:char
 * Return:int
 */
int _atoi(char *s);
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}
/**
 * check - function
 * @ho:char
 * Return:num
 */
int check(char *ho)
{
	int i = 0;
	char *s = ho;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
/**
 * narg - function
 * ch:char
 * Return:num
 */
int narg(int ch);
int narg(int ch)
{
	if (ch != 3)
	{
		return (1);
	}
	return (0);
}
/**
 * main - finction
 * argc:int
 * argv:char
 * Return:num
 */
int main(int argc, char **argv)
{
	char *num1;
	char * num2;
	int mul;

	if (narg(argc) == 1)
	{
		printf("Error");
		exit(98); 
	}

	if (check(argv[1]) == 1)
	{
		printf("Error\n");
		exit(98); 
	}
	if (check(argv[2]) == 1)
        {
                printf("Error\n");
                exit(98);
        }
	num1 = argv[1];
	num2 = argv[2];
	mul = _atoi(num1)* _atoi(num2);
	printf("%d", mul);
	printf("\n");
	return (0);
}
	


