#include "main.h"
/**
 *print_alphabet - prints alphabets
 *
 *Return: void
 */
void print_alphabet(void)
{
    char ch = 'a';
    for(int i = 0; i<26; i++){
      putchar(ch + i);
    }    
    putchar('\n');
}
