#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - a function that creates an array of integers
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: the pointer to the array
 */
int *array_range(int min, int max)
{
  int i, range;
  int *temp, *num;
  range = (max - min);

  if (min > max)
    {
      return (NULL);
    }

  temp = malloc(range);
  if (temp == NULL)
    {
      return (NULL);
    }
  if (temp != NULL)
    {
      num = temp;
    }
  for ( i = 0; i < range; i++)
    {
      *(num + i) = min;
      min++;
    }
  return (num);
}

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
  unsigned int i;

  i = 0;
  while (i < size)
    {
      if (i % 10)
	{
	  printf(" ");
	}
      if (!(i % 10) && i)
	{
	  printf("\n");
	}
      printf("0x%02x", buffer[i]);
      i++;
    }
  printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  int *a;

  a = array_range(0, 10);
  simple_print_buffer(a, 11);
  free(a);
  return (0);
}
