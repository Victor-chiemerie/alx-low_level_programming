#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be checked
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
        if (*(s + 0))
        {
                return (1 + _strlen_recursion(s + 1));
        }
        return (0);
}

/**
 * boolean - checks if a string is a palindrome
 * @x: the pointer to the string to be checked
 * @start: the first string value
 * @end: the last string value
 * 
 * Return: 1 if true else 0
 */
int boolean(char *x, int start, int end)
{
    if (start >= end)
    {
        return (1);
    }
    if(*(x + start) == *(x + (end - 1)))
    {
        return (boolean(x, start + 1, end - 1));
    } 
    else 
    return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the pointer to the string to be checked
 * 
 * Return: 1 if true else 0
 */
int is_palindrome(char *s)
{
    int length = _strlen_recursion(s);
    int n = 0;
    if (boolean(s, n, length) == 1)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
