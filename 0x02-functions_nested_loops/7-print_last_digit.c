#include "main.h"
/**
 * print_last_digit - prints the last digit of the input
 * @n: the value to be checked
 * 
 * Return: the last digit
 */
int print_last_digit(int n){
    int result;
    if(n<0){
        n = n * -1;
        result = n%10;
    return (result);
    }
    else
    result = n%10;
    return (result);
}
