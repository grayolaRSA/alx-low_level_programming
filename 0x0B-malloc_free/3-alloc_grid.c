#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - allocates grid
*@width: int
*@height: int
*Return: 2 dimensional array
*/

int **alloc_grid(int width, int height)
{
int i, j;
int **grid;

if (width == 0 || height == 0)
return (NULL);

grid = malloc(height * sizeof(int *));

if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
grid[i] = calloc(width, sizeof(int));

if (grid[i] == NULL)
for (j = 0; j < i; j++)
free(grid[j]);
return (NULL);

for (j = 0; j < width; j++)
grid[i][j] = 0;
free(grid);

return (grid);

}
