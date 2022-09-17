#include "main.h"
/**
 * more_numbers - prints a list of numbers from 0 to 9, 10 times
 *
 * Return: there is no return value
 */
void more_numbers(void) {
    int k;
    for (k = 0; k < 10; k++)
    {
        int j = 48;
    int i;
    int z = 48;
        for(i=48; i<63; i++){
        if(i>=58){
            z = 49;
        }
        putchar(z); 
        z++;
        if(i>=58){
            putchar(j);
            j++;
        }
    }
    putchar('\n');
    }
}
