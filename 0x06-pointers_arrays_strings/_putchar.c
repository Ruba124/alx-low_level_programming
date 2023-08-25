#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _putchar - func
 * @r:char
 * Return:char
 */
int _putchar(char r)
{
	return (write(1,&r,1));
}
