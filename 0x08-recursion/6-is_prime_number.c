#include "main.h"
/**
 * prime - checks for prime numbers
 * @x: the number to be rooted
 * @y: the number of guesses
 * 
 * Return: the recursion untill the end
 */
int prime(int x, int y)
{
    if (x < y)
    {
        return (0);
    }
    if ((x % y) == 0)
    {
        return (1 + (prime(x, y + 1)));
    }
        else 
        return prime(x, y + 1);    
}

/**
 * is_prime_number - checks if a number is a prime number or not
 * @n: the number to be checked
 * 
 * Return: 1 if true else 0
 */
int is_prime_number(int n)
{
    int guess = 1;
    if (n < 2)
    {
        return (0);
    }
    if ((prime(n, guess)) == 2)
    {
        return (1);
    }
    else
    return (0);
}
