#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an identical string
 * @size: the size of the array
 * @c: the character that the array should be initialized to
 * 
 * Description: a function that creates an array of chars
 * initializes it with a specific char
 * Return: a pointer to the array or NULL if size is zero
 */
char *create_array(unsigned int size, char c)
{
  int i;
  char *ch;

  if (size == 0)
    {
      return (NULL);
    }
  ch = malloc(size * sizeof(int));
  if  (ch == NULL)
    {
      return (NULL);
    }
  for (i = 0; i < (int)size; i++)
    {
      ch[i] = c;
    }
  return (ch);
}
