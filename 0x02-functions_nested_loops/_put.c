#include <unistd.h>
#include "main.h"

/**
 * _putchar - like finction putchar
 * Return: 1 (succes)
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
