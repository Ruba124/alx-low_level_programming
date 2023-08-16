#include "main.h"
/**
 * _isalpha -prints letter
 * @c:letter
 * Return:0-1
 */
int _isalpha(int c)
{
	int l = c;

	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	return (0);
}
