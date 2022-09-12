#include <stdio.h>

/**
*main- entery point
*
*Return: always return 0
*/
int main(void)
{
        int a;
        int b;
        int i, z, x,y;
        for (a = 0; a <= 99; a++)
        {
                i = a / 10;
                x = a % 10;
               
                for (b = 0; b <= 99; b++)
                {
                        z = b / 10;
                        y = b % 10;
                        if (i < z || (i == z && a < b ))
                        {
                               putchar('0' + i);
                               putchar('0' + x);
                               putchar(' ');
                 
                               putchar('0' + z);
                               putchar('0' + y);

                   if (a == 98)
                   break;
                   
                              if (i != 9 || z != 8)
                              {
                                   putchar(',');
                                   putchar(' ');
                               }
                            }
                     }
 
               }

        putchar('\n');
        return (0);
}
