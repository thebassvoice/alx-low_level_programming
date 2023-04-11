#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - main function
 * @width: width parameter
 * @height: height parameter
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int wide, high;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (wide = 0; wide < height; wide++)
	{
		grid[wide] = malloc(sizeof(int) * width);
		if (grid[wide] == NULL)
		{
			for (; wide >= 0; wide--)
				free(grid[wide]);
			free(grid);
			return (NULL);
		}
	}
	for (wide = 0; wide < height; wide++)
	{
		for (high = 0; high < width; high++)
			grid[wide][high] = 0;
	}
	return (grid);
}

