#include "main.h"
/**
 * _strlen - function
 * @s:parameter
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; *s++)
	{	l++; }
	return (l);
}
