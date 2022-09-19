#include "main.h"
/**
 * rev_string - reverses the value of string using pointer address
 * @s: the String parameter
 * 
 * Return: there is no return value
 */
void rev_string(char *s)
{
  int i;
  int j;
  int k;
  int n = strlen(s);
  char a[n];
  for(i = n - 1, j = 0; i >= 0; i--, j++)
    {
      a[j] = s[i];
    }
  for (k = 0; k < n; k++)
    {
      *(s + k) = a[k];
    }
}
