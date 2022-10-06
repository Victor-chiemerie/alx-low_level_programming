#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to be created
 * 
 * Return: a pointer address to the memory;
 */
void *malloc_checked(unsigned int b)
{
  void *value;
  value = malloc(b);
  if(value == NULL)
    {
      exit(98);
    }
  return (value);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  char *c;
  int *i;
  float *f;
  double *d;

  c = malloc_checked(sizeof(char) * 1024);
  printf("%p\n", (void *)c);
  i = malloc_checked(sizeof(int) * 402);
  printf("%p\n", (void *)i);
  f = malloc_checked(sizeof(float) * 100000000);
  printf("%p\n", (void *)f);
  d = malloc_checked(INT_MAX);
  printf("%p\n", (void *)d);
  free(c);
  free(i);
  free(f);
  free(d);
  return (0);
}
