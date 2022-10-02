#include "main.h"
/**
 * _isalpha - checks if an input is an alphabet
 *
 * Return: 1 if true else returns 0
 */
int _isalpha(int c){
    if (((c>96) & (c<123)) | ((c>64) & (c<91)))
    {
        return (1); 
    }
    else return (0);
}
