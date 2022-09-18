#include "main.h"
/**
 * _abs - outputs the absolute value of an integer
 *
 * Return: the absolute value of the input
 */
int _abs(int n){
    if (n>0){
        return (n);
    }
    else 
    {
        n = n * -1;
        return (n);
    }
}
