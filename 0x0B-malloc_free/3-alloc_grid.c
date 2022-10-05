#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: the first string to be concancated
 * @height: the second string to be concancated
 * 
 * Return: a pointer to the array or NULL if any arg is NULL
 */
int **alloc_grid(int width, int height)
{
  int i, j;
  int **array = (int **)malloc(sizeof(int *) * height);

  if  ((width < 1) | (height < 1))
    {
      return (NULL);
    }
  if  (array == 0)
    {
      free(array);
      return (NULL);
    }
  for ( i = 0; i < height; i++)
    {
      *(array + i) = (int *)malloc(sizeof(int) * width);
      if  (*(array + i) == 0)
	{
	  free(array);
	  return (NULL);
	}
      for ( j = 0; j < width; j++)
	{
	  *(*(array + i) + j) = 0;
	}
    }
  return (array);
}
