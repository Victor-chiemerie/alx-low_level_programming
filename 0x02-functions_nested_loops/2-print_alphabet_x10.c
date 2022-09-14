#include "main.h"
/**
 *print_alphabet_x10 - prints alphabets 10 times
 *
 *Return: void
 */

void print_alphabet_x10(void){
int j;
for (j=0; j<10; j++)
  {
    char ch = 'a';
    int i;
    for(i = 0; i<26; i++){
      _putchar(ch + i);
    }    
    _putchar('\n');
}
}
