#include "main.h"
/**
 *_islower - checks if a value is lower case or mot
 *
 *Return: 1 if true but returns 0 if false
 */

int _islower(int c){
  if((c>=97) & (c<=122))
    return (1);
  else 
    return(0);
}
