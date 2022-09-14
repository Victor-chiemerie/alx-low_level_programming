#include "main.h"
/**
 *print_alphabet - prints alphabets
 *
 *Return: void
 */
void print_alphabet(void)
{
    char ch = 'a';
    int i;
    for (i = 0; i<26; i++)
      _putchar(ch + i);
   
    _putchar('\n');
}
