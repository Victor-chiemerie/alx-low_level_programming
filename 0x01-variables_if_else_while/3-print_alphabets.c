#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
  char a = 'a';
  char A = 'A';

  while (a <= 'z')
    {
      putchar(a);
        putchar(A);
	a++;
	A++;
        putchar('\n');
    }
	return (0);
}
