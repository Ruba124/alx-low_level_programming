#include "main.h"
/**
 * _isalpha -prints letter
 * @c:letter
 * Return:0-1
 */
int _isalpha(int c)
{
	int l = c;

	if (((l >= 97) && (l <= 122)) || ((l >= 65) && (l <= 90)))
		return (1);
	return (0);
}
