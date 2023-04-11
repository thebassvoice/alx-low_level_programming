#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - main function
 * @grid: grid parameter
 * @height: height parameter
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int boxes;

	for (boxes = 0; boxes < height; boxes++)
	{
		free(grid[boxes]);
	}
	free(grid);
}

