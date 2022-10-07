#include <stdio.h>
#include <stdlib.h>

/**
 * print - prints out the value of an integer
 * @n: parameter to be printed
 *
 * Return: there is no return value
 */
void print_number(int val)
{
int rem;
if (val < 0)
{
val = val * -1;
_putchar('-');
}
if(val > 9)
{
print_number(val / 10);
rem = val % 10;
_putchar('0' + rem);
}
else
{
_putchar('0' + val);
}
}

/**
 * main - a program that multiplies two positive numbers
 * @argc: the number of arguments passed to main
 * @argv: a string pointer to the arguments passed to maim
 *
 * Return: always 0 else return 98
 */
int main(int argc, char **argv)
{
int result;
int i, j;

if (argc != 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
for (i = 1; i < argc; i++)
{
j = 0;
while (*(*(argv + i) + j))
{
if ((*(*(argv + i) + j) < 48) | (*(*(argv + i) + j) > 57))
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
exit(98);
}
j++;
}
}
result = atoi(*(argv + 1)) * atoi(*(argv + 2));
print_number(result);
_putchar('\n');
return (0);
}