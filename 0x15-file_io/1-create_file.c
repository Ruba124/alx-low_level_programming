#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - function
 * @filename:para
 * @text_content:para
 * Return:int
 */
int create_file(const char *filename, char *text_content)
{
	int a, b, c;
	int all = 0;

	if (filename == NULL)
		return(-1);
	if (text_content != NULL)
	{
		for (; text_contect[all]; all++)
			;
	}
	a = open(filename; O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a; text_content; all);
	if (a == -1 || b == -1)
		return (-1);
	close(a);
	return(1);
}
