#include "main.h"
/**
 * power - gets the square root of a number
 * @x: the number to be rooted
 * @y: the number of guesses
 * 
 * Return: the square root of the number
 */
int power(int x, int y)
{
    if (y >= x)
    {
        return (-1);
    }
        if ((y * y) == x)
        {
            return (y);
        }
        else 
        return power(x, y + 1);    
}

/**
 * _sqrt_recursion - gets the square root of a number
 * @n: the number to be raised
 * 
 * Return: the square root of the number
 */
int _sqrt_recursion(int n)
{
  int guess = 1;
    if (n == 1)
    {
        return 1;
    } 
      return (power(n, guess));
}
