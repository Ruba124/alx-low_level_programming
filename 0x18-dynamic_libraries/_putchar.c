#include <unistd.h>
/**
 * _putchar - function
 * @c:para
 * Return:int
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
