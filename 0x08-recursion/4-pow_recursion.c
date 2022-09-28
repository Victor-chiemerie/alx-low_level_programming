#include "main.h"
/**
 * _pow_recursion - gets the power of a number raised to another number
 * @x: the number to be raised
 * @y: the power
 * 
 * Return: the number raised to the power
 */
int _pow_recursion(int x, int y)
{
        if (y < 0)
        {
                return (-1);
        } 
        else if (y == 0)
        {
                return (1);
        }
        else
        return (x * _pow_recursion(x, y - 1));
}
