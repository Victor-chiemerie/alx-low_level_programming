#include "main.h"
/**
 * factorial - gets the factorial of a number
 * @n: the string to be printed
 * 
 * Return: the factorial
 */
int factorial(int n)
{
  if (n < 0)
    {
      return (-1);
    }
  else if (n == 0)
    {
      return (1);
    }
  else
    return (n * factorial(n - 1));
}
