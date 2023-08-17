#include "main.h"
/**
 *  _isdigit-checks digits
 *  @c:hecks digits
 *  Return:0-1
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
