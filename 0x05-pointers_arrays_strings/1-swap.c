#include "main.h"
/**
 * swap_int - changes the value of the pointer parameter
 * @a: the first pointer address parameter
 * @b: the second pointer address parameter
 * 
 * Return: there is no return value
 */
void swap_int(int *a, int *b)
{
  int n;
  n = *a;
  *a = *b;
  *b = n;
} 
