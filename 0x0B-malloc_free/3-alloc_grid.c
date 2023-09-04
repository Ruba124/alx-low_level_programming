#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function
 * @width:int
 * @height:int
 * Return:pointewr
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int w, h, j, i;

	if (height <= 0 || width <= 0)
	{	return (NULL); }
	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL); }

	for (w = 0; w < height; w++)
	{
		p[w] = (int *) malloc(sizeof(int) * width);
		if (p[w] == NULL)
		{
			free(p);
			for (h = 0; h <= w; h++)
			{
				free(p[w]);
			}
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}
