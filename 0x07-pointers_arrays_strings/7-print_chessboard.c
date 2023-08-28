#include "main.h"
/**
 * print_chessboard - function
 * @a:char
 * Return:no
 */
void print_chessboard(char (*a)[8])
{
	int u, j;

	for (u = 0; u < 8; u++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[u][j]);
		}
		_putchar('\n');
	}
}
