#include "main.h"
/**
 * get_bet - function
 * @n:para
 * @index:para2
 * Return:pp
 */
 int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(n) * 8 <= index)
		return (-1);
	return (n >> index & 1);
}
