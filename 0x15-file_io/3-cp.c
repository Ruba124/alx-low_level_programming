#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - function
 * @argv:para
 * @argc:para2
 * Return:num
 */
int main(int argc, char **argv)
{
	int a1, a2, a3, a4, b1, b2;
	char *buf;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	a1 = open(argv[1], O_RDONLY);
	a2 = read(a1, buf, 1024);
	a3 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (a1 == -1 || a3 == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		a4 = write(a3, buf, a2);
		if (a4 == -1 || a3 == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		a2 = read(a1, buf, 1024);
		a3 = open(argv[2], O_WRONLY | O_APPEND);
		}
	while (a2 > 0);
	free(buf);
	b1 = close(a1);
	if (b1 == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", a1);
		exit(100);
	}
	b2 = close(a3);
	if (b2 == -1)
	{
		 dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", a3);
		 exit (100);
	}
	return (0);
}

