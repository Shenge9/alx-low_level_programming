#include "main.h"
#include <stdlib.h>
/**
 * free_grid - rees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: grid
 * @height: height
 *
 * Return: null
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}