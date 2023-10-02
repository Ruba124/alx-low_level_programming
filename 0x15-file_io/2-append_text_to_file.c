#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - function
 * @text_content:nell
 * @filename:para
 * Return:0--
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b;
	int all = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while(text_content[all])
		{	all++; }
	}
	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, all);
	if (a == -1 || b == -1)
		return (-1);
	close(a);
	return (1);
}


