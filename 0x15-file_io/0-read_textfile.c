#include "main.h"
#include "stdlib.h"
/**
 * read_textfile - function
 * @filename:para
 * @letters:para
 * Return:size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t l, k, o;
	char *ju;

	if (!filename || !letters)
	{	return (0); }
	ju = malloc(sizeof(char) * letters);
	l = open(filename, O_RDONLY);
	k = read(l, ju, letters);
	o = write(STDOUT_FILENO, ju, k);
	if (l == -1 || k == -1 || o == -1)
	{	return (0); }
	close(l);
	return (o);
}


