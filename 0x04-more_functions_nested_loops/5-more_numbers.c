#include "main.h"
/**
 * more_numbers - prints a list of numbers from 0 to 9, 10 times
 *
 * Return: there is no return value
 */
void more_numbers(void) {
int k;
    int j;
    int i;
    int z;
    for (k = 0; k < 10; k++)
    {
        j = 48;
        z = 48;
        for(i=0; i<=14; i++){
        if(i>9){
            z = 49;
        }
        _putchar(z); 
        z++;
        if(i>9){
            _putchar(j);
            j++;
        }
    }
    _putchar('\n');
    }
}
