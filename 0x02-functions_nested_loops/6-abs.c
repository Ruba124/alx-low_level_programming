#include "main.h"
/**
 * _abs -prints absulute value
 * @a -the parameter
 * Return: alaways 0
 */

int _abs(int a)
{
	int l = a;

	if (l > 0)
{	return (l); }
	else if (l < 0)
{	return (printf("%d", l/-1)); }
	else
	return (0);
}
