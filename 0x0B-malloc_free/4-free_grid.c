#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional array
 * @grid: the 2D array to be freed
 * @height: the height of the array
 *
 * Return: there is no return value
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(*(grid + i));
}
free(grid);
}
